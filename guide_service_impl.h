#ifndef GUIDE_IMPL_H_
#define GUIDE_IMPL_H_

#include "guide.grpc.pb.h"
#include "util.h"
#include <vector>
#include <pthread.h>

class GuideServiceImpl final : public Guide::Service {
public:
  explicit GuideServiceImpl(int, int, const std::vector<IntPair> &);
  virtual ~GuideServiceImpl();
  virtual grpc::Status GetNextStep(grpc::ServerContext *, const CarState *,
                                   Step *) override;
private:
  int car_num, row_num, col_num;
  std::vector<IntPair> prevs;
  std::vector<IntPair> nexts;
  std::vector<std::vector<int>> owner;
  pthread_mutex_t mutex;
};

#endif
