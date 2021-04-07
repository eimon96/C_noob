#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

pthread_mutex_t count_mutex     = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t condition_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t  condition_cond1  = PTHREAD_COND_INITIALIZER;
pthread_cond_t  condition_cond2  = PTHREAD_COND_INITIALIZER;

void *functionCount1();
void *functionCount2();
int  count = 0;
#define COUNT_DONE  20
#define COUNT_HALT1  9
#define COUNT_HALT2  14

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
   for(;;)
   {
      pthread_mutex_lock( &condition_mutex );
      while( count >= COUNT_HALT1 && count <= COUNT_HALT2 )
      {
         pthread_cond_wait( &condition_cond1, &condition_mutex );
      }
      pthread_mutex_unlock( &condition_mutex );

      pthread_mutex_lock( &count_mutex );
      count++;
      printf("Counter value functionCount1: %d\n",count);
      pthread_mutex_unlock( &count_mutex );

      pthread_mutex_lock( &condition_mutex );
      if(count >= COUNT_HALT1) 
          pthread_cond_signal( &condition_cond2 );
      pthread_mutex_unlock( &condition_mutex );

      if(count >= COUNT_DONE) return(NULL);
    }
}

void *functionCount2()
{
    for(;;)
    {
       pthread_mutex_lock( &condition_mutex );
       while( count < COUNT_HALT1 || count > COUNT_HALT2 )
       {
         pthread_cond_wait( &condition_cond2, &condition_mutex );
       }
       pthread_mutex_unlock( &condition_mutex );

       pthread_mutex_lock( &count_mutex );
       count++;
       printf("Counter value functionCount2: %d\n",count);
       pthread_mutex_unlock( &count_mutex );

       pthread_mutex_lock( &condition_mutex );
       if(count > COUNT_HALT2) 
          pthread_cond_signal( &condition_cond1 );
       pthread_mutex_unlock( &condition_mutex );

       if(count >= COUNT_DONE) return(NULL);
    }

}

