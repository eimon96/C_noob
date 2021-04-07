#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

#define N 8

static char *messages[N];

void *printHello(void *threadID)
{
	int *id_ptr, taskID;
	
	sleep(1);
	
	id_ptr = (int *)threadID;
	taskID = *id_ptr;
	
	printf("Thread %d: %s\n", taskID, messages[taskID]);
	
	pthread_exit(NULL);
}

int main()
{
	pthread_t threads[N];
	int *ids[N];
	int rc, i;
	
	messages[0] = "English: Hello World!";
   	messages[1] = "French: Bonjour, le monde!";
   	messages[2] = "Spanish: Hola al mundo";
   	messages[3] = "Klingon: Nuq neH!";
   	messages[4] = "German: Guten Tag, Welt!"; 
   	messages[5] = "Russian: Zdravstvytye, mir!";
   	messages[6] = "Japan: Sekai e konnichiwa!";
   	messages[7] = "Latin: Orbis, te saluto!";
	
	for(i = 0; i < N; i++)
	{
		ids[i] = (int *)malloc(sizeof(int));
		*ids[i] = i;
		
		printf("Creating thread %d\n", i);
		rc = pthread_create(&threads[i], NULL, printHello, ids[i]);
		
		if (rc)
      	{
         	printf("ERROR; pthread_create() is %d\n", rc);
         	exit(-1);
      	}
	}
	
	pthread_exit(NULL);	
}





























