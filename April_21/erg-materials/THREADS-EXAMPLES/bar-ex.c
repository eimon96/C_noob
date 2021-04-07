#include <stdio.h> 
#include <pthread.h> 
#include <stdlib.h>
#include <unistd.h>

int t1,t2,t3,t4;
pthread_barrier_t our_barrier;

void *thread1() {
sleep(1);
t1=5;
pthread_barrier_wait(&our_barrier);
printf("Phase1: The values computed till now are  %d %d %d %d \n",t1,t2,t3,t4);
printf("Now proceeding to Phase 2\n");
sleep(4);
printf("Now finished!!!\n");
}


void *thread2() {
sleep(2);
t2=10;
pthread_barrier_wait(&our_barrier);
printf("Phase1: The values computed till now are  %d %d %d %d \n",t1,t2,t3,t4);
printf("Now proceeding to Phase 2\n");
sleep(4);
printf("Now finished!!!\n");
}

void *thread3() {
sleep(3);
t3=15;
pthread_barrier_wait(&our_barrier);
printf("Phase1: The values computed till now are  %d %d %d %d \n",t1,t2,t3,t4);
printf("Now proceeding to Phase 2\n");
sleep(4);
printf("Now finished!!!\n");
}

void *thread4() {
sleep(4);
t4=20;
pthread_barrier_wait(&our_barrier);
printf("Phase1: The values computed till now are  %d %d %d %d \n",t1,t2,t3,t4);
printf("Now proceeding to Phase 2\n");
sleep(4);
printf("Now finished!!!\n");
}


int main() {

pthread_t thread_id_1,thread_id_2,thread_id_3,thread_id_4;
pthread_attr_t attr;

t1=t2=t3=t4=0;

pthread_barrier_init(&our_barrier,NULL,4);

pthread_create(&thread_id_1,NULL,&thread1,NULL);
pthread_create(&thread_id_2,NULL,&thread2,NULL);
pthread_create(&thread_id_3,NULL,&thread3,NULL);
pthread_create(&thread_id_4,NULL,&thread4,NULL);

pthread_join(thread_id_1,NULL);
pthread_join(thread_id_2,NULL);
pthread_join(thread_id_3,NULL);
pthread_join(thread_id_4,NULL);

pthread_barrier_destroy(&our_barrier);
}

