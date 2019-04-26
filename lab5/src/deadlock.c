#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

pthread_mutex_t mut1 = PTHREAD_MUTEX_INITIALIZER, mut2 = PTHREAD_MUTEX_INITIALIZER;

void foo(ptrdiff_t adr)
{          
    pthread_mutex_lock(&mut1);
    printf("Im %p and im locking foo() now!\nAnd will try launch bar()...\n", adr);
    bar(adr);
}

void bar(ptrdiff_t adr)
{          
    pthread_mutex_lock(&mut2);
    printf("Im %p and im locking bar() now!\nAnd will try launch foo()...\n", adr);
    foo(adr);
}

int main()
{
    pthread_t thread_1, thread_2;
    
    printf("Thread 1 is %p\nThread 2 is %p\n", &thread_1, &thread_2);
    
    pthread_create(&thread_1, NULL, foo, (void *)&thread_1);
    pthread_create(&thread_2, NULL, bar, (void *)&thread_2);
    
    pthread_join(thread_1, NULL);
    pthread_join(thread_2, NULL);
    
    printf("Done!");
    return 0;
}