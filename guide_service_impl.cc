#include "guide_service_impl.h"
#include "guide.pb.h"
#include "util.h"

GuideServiceImpl::GuideServiceImpl(int row_num, int col_num,
                     const std::vector<IntPair> &starts,
                     const std::vector<IntPair> &goals)
  : car_num(starts.size()), row_num(row_num), col_num(col_num),
    starts(starts), goals(goals), prevs(car_num), nexts(car_num) {
  mutex = PTHREAD_MUTEX_INITIALIZER;
  if (row_num <= 0 || col_num <= 0)
    throw std::invalid_argument("row/column number should be positive");
  if (starts.size() != goals.size())
    throw std::invalid_argument("number of start and goal positions \
        do not match");
  
  for (int i = 0; i < car_num; ++i) {
    if (!starts[i].Validate(row_num, col_num) ||
        !goals[i].Validate(row_num, col_num))
      throw std::invalid_argument("start/goal position out of range");
    if (owner.count(starts[i]))
      throw std::invalid_argument("two cars have the same start position");

    prevs[i] = IntPair(-1, -1);
    nexts[i] = starts[i];
    
    owner[starts[i]] = i;
  }
}

GuideServiceImpl::~GuideServiceImpl() {}

grpc::Status GuideServiceImpl::GetNextStep(grpc::ServerContext *context,
                                           const CarPosition *car_position,
                                           Step *step) {
  int car_id = car_position->car_id();
  IntPair current(car_position->row_idx(), car_position->col_idx());
  Step::StepCode step_code = Step::StepCode::Step_StepCode_STOP;
  grpc::Status status;
  IntPair current_to_goal;

  pthread_mutex_lock(&mutex);

  if (car_id < 0 || car_id >= car_num) {
    status = grpc::Status(grpc::StatusCode::OUT_OF_RANGE,
        "car ID out of range");
    goto release;
  }
  if (current != nexts[car_id]) {
    status = grpc::Status(grpc::StatusCode::FAILED_PRECONDITION,
        "unexpected position");
    goto release;
  }

  if (prevs[car_id] != current)
    owner.erase(prevs[car_id]);
  
  if (current == goals[car_id]) {
    goals[car_id] = starts[car_id];
    starts[car_id] = current;
  }
  
  current_to_goal = goals[car_id] - current;
  for (int k = 0; k < 4; ++k) {
    IntPair offset = kOffsets[k];
    IntPair neighbor = current + kOffsets[k];
    if (neighbor.Validate(row_num, col_num) && !owner.count(neighbor))
      if (step_code == Step::StepCode::Step_StepCode_STOP ||
          offset.DotProduct(current_to_goal) > 0)
        step_code = (Step::StepCode) k;
  }
  if (current == goals[car_id])
    step_code = Step::StepCode::Step_StepCode_STOP;
  
  prevs[car_id] = current;
  nexts[car_id] = current + kOffsets[step_code];
  owner[nexts[car_id]] = car_id;

release:
  pthread_mutex_unlock(&mutex);

  step->set_step_code(step_code);
  return status;
}
