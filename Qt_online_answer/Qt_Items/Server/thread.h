#ifndef THREAD_H
#define THREAD_H

#include <stdio.h>
#include <event2/event_struct.h>
#include <event2/event.h>
#include <stdlib.h>
#include <event2/event_compat.h>
#include <pthread.h>
#include <unistd.h>
#include <errno.h>
//线程类
class Thread
{
public:
    Thread();

    //线程运行
    void start();

    //获取事件集合
    struct event_base *getBase();

protected:
    // 线程的工作函数
    static void* worker(void *);
    //读取管道
    static void pipeRead(evutil_socket_t,short,void *);
    
    //线程的逻辑处理函数
    void run();

private:
    struct event_base *m_base;     //事件集合

    pthread_t m_threadId;          //线程ID

    int m_pipeReadFd;              //管道读端
    int m_pipWirteFd;              //管道写端
    struct event m_pipeEvent;      //管道事件
};

#endif // THREAD_H
