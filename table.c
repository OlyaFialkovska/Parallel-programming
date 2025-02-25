#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "threads.h"
#include "initialization.h"
#include "table.h"

void table()
{
    printf("\n");
    for(int k=0; k<97; k++)
        printf("-");
    printf("\n");

    printf("|");
    for(int k=0; k<36; k++)
        printf(" ");
    printf("Функції однієї змінної");
    for(int k=0; k<37; k++)
        printf(" ");
    printf("|\n");

    for(int k=0; k<97; k++)
        printf("-");
    printf("\n");

    printf("| Аргумент х | pow(cos(xi),2)*sin(xi) | pow(sin(xi),2)*(1+cos(xi)) | sin(xi)*(1+pow(cos(xi),2)) |\n");

    for(int k=0; k<97; k++)
        printf("-");
    printf("\n");

    for (int i = 0; i < args.n; i++)
    {
        xi_f = args.a + i * args.h;
        pthread_barrier_wait(&bar);
        printf("|  %.6f  |  %20.6f  |  %20.6f      |  %20.6f      |\n", xi_f, f1, f2, f3);
        pthread_barrier_wait(&bar2);
    }

    for(int k=0; k<97; k++)
        printf("-");
    printf("\n");
}
