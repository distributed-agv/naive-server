#include "guide.grpc.pb.h"
#include <pthread.h>
#include <vector>
#include <map>
#include <utility>
#include </usr/local/include/hiredis/hiredis.h>

using namespace std;
class GuideImpl final : public Guide::Service {
 public:
  explicit GuideImpl(int, int);
  virtual ~GuideImpl();
  virtual grpc::Status GetNextStep(grpc::ServerContext *,
                                   const Point *, Step *) override;
  void releaseLock(int ,int ,int,int,int,redisContext *);
  void getLock(int ,int,int,redisContext *);
  void findNextStep(int ,int ,int&,int&,int,int,int,redisContext *);
 private:
  int car, x, y;
  int mx[10][10];
  int w;
  int l;
  pthread_mutex_t mutex;
};

