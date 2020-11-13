#ifndef GUIDE_IMPL_H_
#define GUIDE_IMPL_H_

#include "guide.grpc.pb.h"
#include "util.h"
#include <vector>
#include <map>

class GuideServiceImpl final : public Guide::Service {
public:
  explicit GuideServiceImpl(int, int, const std::vector<IntPair> &,
                     const std::vector<IntPair> &);
  virtual ~GuideServiceImpl();
  virtual grpc::Status GetNextStep(grpc::ServerContext *, const CarPosition *,
                                   Step *) override;
private:
  int car_num, row_num, col_num;
  pthread_mutex_t mutex;
  std::vector<IntPair> starts;
  std::vector<IntPair> goals;
  std::vector<IntPair> prevs;
  std::vector<IntPair> nexts;
  std::map<IntPair, int> owner;
};

#endif
