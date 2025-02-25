#include <locale.h>
#include "threads.h"
#include "initialization.h"
#include "table.h"

int main()
{
    setlocale(LC_ALL, "UA");

    initialization();

    pthread_create(&thread1,NULL,&func_thread_1,&args);
    pthread_create(&thread2,NULL,&func_thread_2,&args);
    pthread_create(&thread3,NULL,&func_thread_3,&args);

    table();

    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    pthread_join(thread3,NULL);

    pthread_barrier_destroy(&bar);

    return 0;
}

