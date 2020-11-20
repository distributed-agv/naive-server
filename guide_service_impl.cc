#include "guide_service_impl.h"
#include "guide.pb.h"
#include "util.h"
#include <pthread.h>

GuideServiceImpl::GuideServiceImpl(int row_num, int col_num,
                                   const std::vector<IntPair> &starts)
  : row_num(row_num), col_num(col_num), car_num(starts.size()),
    prevs(starts), nexts(starts), mutex(PTHREAD_MUTEX_INITIALIZER) {
  if (row_num <= 0 || col_num <= 0)
    throw std::invalid_argument("row/column number should be positive");

  owner.assign(row_num, std::vector<int>(col_num, -1));
  for (int i = 0; i < car_num; ++i) {
    if (owner[starts[i].x][starts[i].y] >= 0)
      throw std::invalid_argument("two cars have the same start position");
    owner[starts[i].x][starts[i].y] = i;
  }
}

GuideServiceImpl::~GuideServiceImpl() {}

grpc::Status GuideServiceImpl::GetNextStep(grpc::ServerContext *context,
                                           const CarState *car_state,
                                           Step *step) {
  int car_id = car_state->car_id();
  IntPair cur(car_state->cur_row_idx(), car_state->cur_col_idx());
  IntPair goal(car_state->goal_row_idx(), car_state->goal_col_idx());
  IntPair cur_to_goal = goal - cur;
  IntPair prev, next;
  Step::StepCode step_code = Step_StepCode_STOP;
  grpc::Status status;

  if (car_id < 0 || car_id >= car_num) {
    status = grpc::Status(grpc::StatusCode::INVALID_ARGUMENT,
                          "car ID out of range");
    goto leave;
  }
  if (!cur.Validate(row_num, col_num)) {
    status = grpc::Status(grpc::StatusCode::INVALID_ARGUMENT,
                          "current position out of range");
    goto leave;
  }
  if (!goal.Validate(row_num, col_num)) {
    status = grpc::Status(grpc::StatusCode::INVALID_ARGUMENT,
                          "goal position out of range");
    goto leave;
  }

  for (int k = 0; k < 4; ++k) {
    IntPair offset = kOffsets[k];
    IntPair neighbor = cur + kOffsets[k];
    if (neighbor.Validate(row_num, col_num) &&
        (owner[neighbor.x][neighbor.y] < 0 ||
         owner[neighbor.x][neighbor.y] == car_id))
      if (step_code == Step::StepCode::Step_StepCode_STOP ||
          offset.DotProduct(cur_to_goal) > 0)
        step_code = (Step::StepCode) k;
  }
  
  pthread_mutex_lock(&mutex);

  if (cur != nexts[car_id]) {
    status = grpc::Status(grpc::StatusCode::FAILED_PRECONDITION,
                          "unexpected current position");
    step_code = Step_StepCode_STOP;
    goto release;
  }

  prev = prevs[car_id];
  if (prev != cur)
    owner[prev.x][prev.y] = -1;

  next = cur + kOffsets[step_code];
  if (owner[next.x][next.y] >= 0) {
    step_code = Step_StepCode_STOP;
    next = cur;
  }

  prevs[car_id] = cur;
  nexts[car_id] = next;
  owner[next.x][next.y] = car_id;

release:
  pthread_mutex_unlock(&mutex);

leave:
  step->set_step_code(step_code);
  return status;
}
