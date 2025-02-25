#include "initialization.h"
#include <stdio.h>
#include <pthread.h>
#include <math.h>

void initialization()
{
    pthread_barrier_init(&bar,NULL,4);
    pthread_barrier_init(&bar2,NULL,4);

    args.a = 0;
    args.b = pi;
    args.n = 8;
    args.h = (args.b - args.a) / args.n;
}
