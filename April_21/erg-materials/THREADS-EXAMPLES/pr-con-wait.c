#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <semaphore.h>

#define BUFF_SIZE 6
#define LOOP 20

char buffer[BUFF_SIZE];
int nextIn = 0;
int nextOut = 0;
int slots_count = 0; 

pthread_cond_t cond_empty=PTHREAD_COND_INITIALIZER;
pthread_cond_t cond_full=PTHREAD_COND_INITIALIZER;

pthread_mutex_t mutex=PTHREAD_MUTEX_INITIALIZER;

void *producer ()
{
	int i;
	char item;

	for (i = 0; i < LOOP; i++) 
   		{
		pthread_mutex_lock (&mutex);
  		while (slots_count==BUFF_SIZE) 
                   pthread_cond_wait(&cond_empty, &mutex);
		pthread_mutex_unlock (&mutex);
                item = ((char)('A'+ i % 26));
  		buffer[nextIn] = item; 
  		nextIn = (nextIn + 1) % BUFF_SIZE;
		pthread_mutex_lock (&mutex);
                slots_count++;
		pthread_mutex_unlock (&mutex);
  		printf("Producing %c ...\n", item);
		pthread_mutex_lock (&mutex);
                if (slots_count==1)
  		   pthread_cond_signal(&cond_full);
		pthread_mutex_unlock (&mutex);
		usleep (100000); 
    		}
	return (NULL);
}

void *consumer ()
{
	int i;
	char item;

	for (i = 0; i < LOOP; i++) 
   		{
		pthread_mutex_lock (&mutex);
  		while (slots_count==0) 
                   pthread_cond_wait(&cond_full, &mutex);
		pthread_mutex_unlock (&mutex);
                item = buffer[nextOut];
  		nextOut = (nextOut + 1) % BUFF_SIZE;
		pthread_mutex_lock (&mutex);
                slots_count--;
		pthread_mutex_unlock (&mutex);
 		printf("Consuming %c ...\n", item);
		pthread_mutex_lock (&mutex);
                if (slots_count==BUFF_SIZE-1)
  		   pthread_cond_signal(&cond_empty);
		pthread_mutex_unlock (&mutex);
		usleep (2000000);
    		}
	return (NULL);
}

int main ()
{
	pthread_t pro, con;

	pthread_create (&pro, NULL, producer, NULL);
	pthread_create (&con, NULL, consumer, NULL);
	
	pthread_join (pro, NULL);
	pthread_join (con, NULL);
	
	return 0;
}

