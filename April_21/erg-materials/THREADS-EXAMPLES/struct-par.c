#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


struct a_struct {
     int id;
     int sleep_time;
     int num;
};

void *MyThreadFunc(void* arg)
{
 struct a_struct *str = (struct a_struct *)arg;
 int sq,answer=0;

 printf("Hello I am thread %d and if you answer the question\n", str->id);
 printf("I will sleep for: %d seconds,\n", str->sleep_time);
 printf("I will tell you the square of the number you gave and...\n");
 printf("also I will tell you my real ID\n");

 while(answer!=120)
 {
  printf("What is the factorial of 5?\n");
  scanf("%d", &answer);
  printf("Sleeping\n");
  sleep(str->sleep_time);
 }

 sq=(str->num)*(str->num);
 printf("The square of the number you gave is: %d\n",sq); 
 printf("My real ID is: %lu\n", pthread_self());
 printf("Good Bye!\n");
 pthread_exit(NULL);

}

int main()
{
 pthread_t aThread;
 struct a_struct my_struct;
 my_struct.id = 1000;
 my_struct.sleep_time = 5;

 printf("Give a number...:");
 scanf("%d", &my_struct.num);

 pthread_create(&aThread, NULL ,MyThreadFunc,(void* )&my_struct);

 pthread_join(aThread,NULL);
 
 pthread_exit(NULL);
}
