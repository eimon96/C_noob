#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>


void *pOne(void *);
void *pTwo(void *);
void *pThree(void *);


int s;
sem_t sem1;
sem_t sem2;
sem_t sem3;

int main(int argc, char **argv)
{
    pthread_t thr0, thr1, thr2;
    
    s = 3;

    sem_init (&sem1, 0, 2);
    sem_init (&sem2, 0, 1);
    sem_init (&sem3, 0, 0);

    pthread_create (&thr0, NULL, pOne, NULL);
    pthread_create (&thr1, NULL, pTwo, NULL);
    pthread_create (&thr2, NULL, pThree, NULL);
    
	pthread_join(thr0, NULL);
    pthread_join(thr1, NULL);
    pthread_join(thr2, NULL);

    return 0;
}


void *pOne(void *p)
{
    for(;;)
    {
        sem_wait (&sem1);
        
        if (s % 3 == 0)
        {
        	printf("One\n");
        	s++;
       	    sleep(1);
        }
            sem_post (&sem2);
        }
}


void *pTwo(void *p)
{
    for(;;)
    {
		sem_wait (&sem2);
	
	    if (s % 3 == 1)
	    {
	        printf("Two\n");
	        s++;
	        sleep(1);
	    }
	    sem_post (&sem3);
    }
}


void *pThree(void *p)
{
    for(;;)
    {
		sem_wait (&sem3);
	
	    if (s % 3 == 2)
	    {
	        printf("Three\n");
	        s++;
	        sleep(1);
	    }
	    sem_post (&sem1);
    }
}







