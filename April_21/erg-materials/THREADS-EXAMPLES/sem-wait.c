#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

void *functionCount1();
void *functionCount2();
int  count = 0;

#define COUNT_HALT  20
sem_t sem;

int main()
{
   pthread_t thread1, thread2;

   sem_init(&sem, 0, 0);

   pthread_create( &thread1, NULL, &functionCount1, NULL);
   pthread_create( &thread2, NULL, &functionCount2, NULL);
   pthread_join( thread1, NULL);
   pthread_join( thread2, NULL);
   printf("Final Value of Counter = %d\n",count);

   exit(0);
}

void *functionCount1()
{
  while (count < COUNT_HALT) {
       usleep(100000);
       count++;
       printf("FunctionCount1: %d\n",count);
       fflush(stdout);
  }
  
  sem_post(&sem);
}

void *functionCount2()
{
  printf("Function2 Doing my job before counting...\n");

  sem_wait(&sem);

  while (count < 2*COUNT_HALT)
       {
        usleep(100000);
        count++;
        printf("FunctionCount2: %d\n",count);
        fflush(stdout);
       }
}

