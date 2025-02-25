#include "threads.h"
#include "initialization.h"

void* func_thread_1 (void* parameters1)
{
    struct parametrs_for_threads* p1 = (struct parametrs_for_threads*)parameters1;
    int i;
    float xi1=1;
    for(i=0; i<(p1->n); i++)
    {
        xi1=(p1->a)+i*(p1->h);
        f1=pow(cos(xi1),2)*sin(xi1);
        xi_f=xi1;
        pthread_barrier_wait(&bar);
        pthread_barrier_wait(&bar2);
    }
    return NULL;
}
void* func_thread_2 (void* parameters2)
{
    struct parametrs_for_threads* p2 = (struct parametrs_for_threads*)parameters2;
    int i;
    float xi2=1;
    for(i=0; i<(p2->n); i++)
    {
        xi2=(p2->a)+i*(p2->h);
        xi_f=xi2;
        f2=pow(sin(xi2),2)*(1+cos(xi2));
        pthread_barrier_wait(&bar);
        pthread_barrier_wait(&bar2);
    }
    return NULL;
}
void* func_thread_3 (void* parameters3)
{
    struct parametrs_for_threads* p3 = (struct parametrs_for_threads*)parameters3;
    int i;
    float xi3=1;
    for(i=0; i<(p3->n); i++)
    {
        xi3=(p3->a)+i*(p3->h);
        xi_f=xi3;
        f3=sin(xi3)*(1+pow(cos(xi3),2));
        pthread_barrier_wait(&bar);
        pthread_barrier_wait(&bar2);
    }
    return NULL;
}
