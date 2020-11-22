#include "guide_impl.h"
#include "util.h"
#include <pthread.h>
#include <exception>
#include <iostream>


GuideImpl::GuideImpl(int width, int length)
{
  w=width;
  l=length;
  mutex=PTHREAD_MUTEX_INITIALIZER;
  for(int i=0;i<10;i++)
    for(int j=0;j<10;j++)
     {
       mx[i][j]=-1;  //-1表示没有人获得这个节点
     }

}
void GuideImpl::releaseLock(int x,int y,int nextX,int nextY,int car){
  
  if(x+1<=w&&mx[x+1][y]==car)
  {
    if(x+1!=nextX)
      mx[x+1][y]=-1;
  }
  if(y+1<=l&&mx[x][y+1]==car)
  {
    if(y+1!=nextY)
    mx[x][y+1]=-1;
   
  }
  if(x-1>=0&&mx[x-1][y]==car)
  {
    if(x-1!=nextX)
    mx[x-1][y]=-1;
  }
  if(y-1>=0&&mx[x][y-1]==car)
  {
    if(y-1!=nextY)
    mx[x][y-1]=-1;
  }
  
}
GuideImpl::~GuideImpl() {}
void GuideImpl::getLock(int x,int y,int car){
  pthread_mutex_lock(&mutex);   
   if(x+1<=w&&mx[x+1][y]==-1)
  {
    mx[x+1][y]=car;
  }
  if(y+1<=l&&mx[x][y+1]==-1)
  {
    mx[x][y+1]=car;
   
  }
  if(x-1>=0&&mx[x-1][y]==-1)
  {
    mx[x-1][y]=car;
  }
  if(y-1>=0&&mx[x][y-1]==-1)
  {
    mx[x][y-1]=car;
  }
  pthread_mutex_unlock(&mutex);   
}
void GuideImpl::findNextStep(int x,int y,int *nextX,int *nextY,int car,int goalX,int goalY){
    Astar astar(l,w,car);
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
            map[i][j]=mx[i][j];
        }
    }
    if(astar.search(startPos,endPos,map,nextX,nextY))
    {
        return;
    }
    else{
      *nextX=-1;
      *nextY=-1;
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
  int row_delta = 0;
  int col_delta = 0;
  
  std::cout << car << " " << lastX << " " << lastY<< std::endl;
  
  grpc::Status status;
  //拿锁阶段
  if(lastX>=0&&lastY>=0){
    pthread_mutex_lock(&mutex);
     mx[lastX][lastY]=-1;
     pthread_mutex_unlock(&mutex);
     getLock(nowX,nowY,car);
  }
  else{
    pthread_mutex_lock(&mutex);   
    if(mx[nowX][nowY]!=0)
    {
      next_step->set_nextx(-1);
      next_step->set_nexty(-1);
        return status;
    }
      
    mx[nowX][nowY]=car;
    pthread_mutex_unlock(&mutex); 
    getLock(nowX,nowY,car);
  }
  //寻路阶段
  findNextStep(nowX,nowY,&nextX,&nextY,car,goalX,goalY);
  
  

  //放锁阶段
  next_step->set_nextx(nextX);
  next_step->set_nexty(nextY);
  releaseLock(nowX,nowY,nextX,nextY,car);
 
  return status;
}
