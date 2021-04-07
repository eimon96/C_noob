#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

int counter=0;
pthread_mutex_t mut=PTHREAD_MUTEX_INITIALIZER;

void *thread_function(void *arg)
{
 int i;

 pthread_mutex_lock(&mut);
 for (i=0; i<1000000; i++)
    counter++;
 pthread_mutex_unlock(&mut);

 printf("Thread no %d has finished.Counter now is %d\n",arg,counter);

 pthread_exit(NULL);
}

int main()
{
pthread_t mythread[10]; 
int i;

for (i=0 ; i<=9 ; i++)
 pthread_create(&mythread[i], NULL, thread_function, (void *)i+1);

for (i=0 ; i<=9 ; i++)
 pthread_join(mythread[i],NULL);

printf("Counter is:%d\n", counter);

pthread_exit(NULL);
}
