#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <stdio.h>

int factorial=1;

void *paragontiko(void *arg) 
{
  int a = *((int *) arg);

  factorial=factorial*a;
  printf("Thread: %d done.\n", a);

  pthread_exit(NULL);
}

int main() 
{
  int i,num;
  int intargs[200];
  pthread_t p_thread[200];
  
  printf("Dose ton arithmo tou opoiou thes to paragontiko (mexri 200):");
  scanf("%d",&num);

  for (i = 1 ; i <= num ; i++) {
    intargs[i]=i;
    pthread_create(&p_thread[i-1] ,NULL, paragontiko, (void *) &intargs[i]);
  }

  for (i = 1 ; i <= num ; i++)
    pthread_join(p_thread[i-1],NULL);

  printf("All threads completed.\n");
  printf("And the factorial is:%d\n", factorial);

  pthread_exit(NULL);
}
