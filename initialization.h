#ifndef INITIALIZATION_H_INCLUDED
#define INITIALIZATION_H_INCLUDED

#include <pthread.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define pi 3.141592

struct parametrs_for_threads
{
    float a;//0
    float b;//pi
    int n;//8
    float h;
};

pthread_t thread1;
pthread_t thread2;
pthread_t thread3;

pthread_barrier_t bar;
pthread_barrier_t bar2;

void initialization();

float f1,f2,f3,xi_f;
struct parametrs_for_threads args;

#endif // INITIALIZATION_H_INCLUDED
