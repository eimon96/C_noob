#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

pthread_mutex_t condition_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t  condition_cond  = PTHREAD_COND_INITIALIZER;

void *functionCount1();
void *functionCount2();
int  count = 0;
int  turn2 = 0;
#define COUNT_HALT  20

int main()
{
   pthread_t thread1, thread2;

   pthread_create( &thread1, NULL, &functionCount1, NULL);
   pthread_create( &thread2, NULL, &functionCount2, NULL);
   pthread_join( thread1, NULL);
   pthread_join( thread2, NULL);

   exit(0);
}

void *functionCount1()
{
  int done = 0;

     while (!done) 
     {
       usleep(100000);
       count++;
       printf("Counter value FunctionCount1: %d\n",count);

       pthread_mutex_lock( &condition_mutex );
       if (count == COUNT_HALT) 
          {
           done = 1;
           turn2 = 1;
           pthread_cond_signal( &condition_cond );
          }
       pthread_mutex_unlock( &condition_mutex );
     }
}

void *functionCount2()
{
       printf("Function2 Doing my job before counting...\n");

       pthread_mutex_lock( &condition_mutex );
       while( turn2 != 1 )
          pthread_cond_wait( &condition_cond, &condition_mutex );
       pthread_mutex_unlock( &condition_mutex );

       while (count < 2*COUNT_HALT)
       {
        usleep(100000);
        count++;
        printf("Counter value FunctionCount2: %d\n",count);
       }
}

