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

sem_t empty_slots;
sem_t full_slots;

pthread_mutex_t mut=PTHREAD_MUTEX_INITIALIZER;

void *producer ()
{
	int i;
	char item;

	for (i = 0; i < LOOP; i++) 
   		{
		sem_wait(&empty_slots);
		pthread_mutex_lock (&mut);
                item = ((char)('A'+ i % 26));
  		buffer[nextIn] = item; 
  		nextIn = (nextIn + 1) % BUFF_SIZE;
  		printf("Producing %c ...\n", item);
		pthread_mutex_unlock (&mut);
  		sem_post(&full_slots);
		usleep (200000); 
    		}
	return (NULL);
}

void *consumer ()
{
	int i;
	char item;

	for (i = 0; i < LOOP; i++) 
   		{
		sem_wait(&full_slots);
		pthread_mutex_lock (&mut);
                item = buffer[nextOut];
  		nextOut = (nextOut + 1) % BUFF_SIZE;
 		printf("Consuming %c ...\n", item);
		pthread_mutex_unlock (&mut);
  		sem_post(&empty_slots);
		usleep (2000000);
    		}
	return (NULL);
}

int main ()
{
	pthread_t pro, con;

	sem_init(&empty_slots, 0, BUFF_SIZE);
	sem_init(&full_slots, 0, 0);
	
	pthread_create (&pro, NULL, producer, NULL);
	pthread_create (&con, NULL, consumer, NULL);
	
	pthread_join (pro, NULL);
	pthread_join (con, NULL);
	
	return 0;
}

