#include "guide_impl.h"


#include <pthread.h>
#include <exception>
#include <iostream>
#include "Astar.h"
#include </usr/local/include/hiredis/hiredis.h>
using namespace std;
GuideImpl::GuideImpl(int width, int length)
{
  w=width;
  l=length;
}
void GuideImpl::releaseLock(int x,int y,int nextX,int nextY,int car,redisContext *conn){
  
  if(x+1<=w&&x+1!=nextX)
  {
   
     string name=to_string(x+1)+"_"+to_string(y);
     redisReply* reply = (redisReply*)redisCommand(conn, "GET %s",name.data());
     if(reply->str && atoi(reply->str)==car){
       redisCommand(conn, "DEL %s", name.data());
     }
     delete reply;
  }
  if(y+1<=l&&y+1!=nextY)
  {
    
    string name=to_string(x)+"_"+to_string(y+1);
     redisReply* reply = (redisReply*)redisCommand(conn, "GET %s",name.data());
     
     if(reply->str && atoi(reply->str)==car){
       
       redisCommand(conn, "DEL %s", name.data());
     }
     delete reply;
  }
  if(x-1>=0&&x-1!=nextX)
  {
    string name=to_string(x-1)+"_"+to_string(y);
    redisReply* reply = (redisReply*)redisCommand(conn, "GET %s",name.data());
    if(reply->str && atoi(reply->str)==car){
      
       redisCommand(conn, "DEL %s", name.data());
    }
    delete reply;
  }
  if(y-1>=0&&y-1!=nextY)
  {
    string name=to_string(x)+"_"+to_string(y-1);
    redisReply* reply = (redisReply*)redisCommand(conn, "GET %s",name.data());
    if(reply->str && atoi(reply->str)==car){
       
       redisCommand(conn, "DEL %s", name.data());
    }
    delete reply;
  }
  
}
GuideImpl::~GuideImpl() {}
void GuideImpl::getLock(int x,int y,int car,redisContext *conn){
  string key=to_string(car);
  string name;
  if(x+1<=w){
 

  name=to_string(x+1)+"_"+to_string(y);
  
  redisCommand(conn, "SET %s %s NX EX %d", name.data(),key.data());
  }
  if(y+1<=l){
  name=to_string(x)+"_"+to_string(y+1);
  
  redisCommand(conn, "SET %s %s NX EX %d", name.data(),key.data());
  
  }
  if(x-1>=0){
  name=to_string(x-1)+"_"+to_string(y);
  redisCommand(conn, "SET %s %s NX EX %d", name.data(),key.data());
  
  }
  if(y-1>=0){
  name=to_string(x)+"_"+to_string(y-1);
  redisCommand(conn, "SET %s %s NX EX %d", name.data(),key.data());
  
  }
}
Step::StepCode changeNextToDirect(int nowX, int nowY, int nextX,int nextY){
  if(nextX==-1&&nextY==-1)
     return (Step::StepCode)4;
  if(nowX==nextX-1)
     return (Step::StepCode)1;
  if(nowX==nextX+1)
     return (Step::StepCode)0;
  if(nowY==nextY-1)
     return (Step::StepCode)2;
  if(nowY==nextY+1)
     return (Step::StepCode)3;
  return (Step::StepCode)4;
}
  
void GuideImpl::findNextStep(int x,int y,int &nextX,int &nextY,int car,int goalX,int goalY,redisContext *conn){
    Astar astar(l-1,w-1,car);
    Node *startPos = new Node(x,y);
    Node *endPos = new Node(goalX,goalY);
    int **map=new int*[w];
    for(int i=0;i<l;i++)
    {
        map[i]=new int [l];
    }
    for(int i=0;i<w;i++)
    {
        for(int j=0;j<l;j++)
        {
            string name=to_string(i)+"_"+to_string(j);
            redisReply* reply = (redisReply*)redisCommand(conn, "GET %s",name.data());
            if(reply->str==NULL)
                map[i][j]=-1;
            else{
              int value=atoi((reply->str));
              map[i][j]=value;
            }
            delete reply;
        }
       
    }

    
    int *tmpX=new int;
    int *tmpY=new int;
    if(astar.search(startPos,endPos,map,tmpX,tmpY))
    {
        
        nextY=*tmpY;
        nextX=*tmpX;
        return;
    }
    else{
      nextX=-1;
      nextY=-1;
    }
}
grpc::Status GuideImpl::GetNextStep(grpc::ServerContext *context,
                                    const Point *point,
                                    Step *next_step) {
  int car = point->car();
  int lastX = point->lastx();
  int lastY = point->lasty();
  int nowX =point->nowx();
  int nowY=point->nowy();
  int goalX=point->goalx();
  int goalY=point->goaly();
  int nextX=0;
  int nextY=0;
  grpc::Status status;
  
  std::cout << car << " " << lastX << " " << lastY<< std::endl;
  redisContext *conn  = redisConnect("127.0.0.1",6379);
  if (NULL == conn || conn->err)
  {
      cout<<"fail to connect to redis"<<endl;
      Step::StepCode step_code = Step_StepCode_STOP;
      next_step->set_step_code(step_code);//停止
      return status;
  }
  
  //拿锁阶段
  if(lastX>=0&&lastY>=0){
     
     string name=to_string(lastX)+"_"+to_string(lastY);
     redisCommand(conn, "DEL %s", name.data());//目前只考虑成功情况
     getLock(nowX,nowY,car,conn);
  }
  else{
    getLock(nowX,nowY,car,conn);
  }
  //return status;
  //寻路阶段
  findNextStep(nowX,nowY,nextX,nextY,car,goalX,goalY,conn);
  

  Step::StepCode step_code=changeNextToDirect(nowX,nowY,nextX,nextY);
  next_step->set_step_code(step_code);

  //放锁阶段
  
  
  releaseLock(nowX,nowY,nextX,nextY,car,conn);
  redisFree(conn);
  
  return status;
}
