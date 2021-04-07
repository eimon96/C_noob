#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

void *pTick(void *);
void *pTack(void *);

int sem;
pthread_mutex_t Mutex;
pthread_cond_t Cond;

int main(int argc, char **argv)
{
    pthread_t thr0, thr1;
    int r0, r1;
    
    sem = 1;

    pthread_mutex_init (&Mutex, NULL);
    pthread_cond_init (&Cond, NULL);

    r0 = pthread_create (&thr0, NULL, pTick, NULL);
    r1 = pthread_create (&thr1, NULL, pTack, NULL);
    
	pthread_join(thr0, NULL);
    pthread_join(thr1, NULL);

    return 0;
}

void *pTick(void *p)
{
    for(;;)
    {
        pthread_mutex_lock (&Mutex);
        
        if (sem % 2 == 1)
        {
			pthread_cond_wait (&Cond, &Mutex);
        	printf("Tick\n");
        	sem++;
       	    sleep(1);
        }
            pthread_cond_signal (&Cond);
            pthread_mutex_unlock (&Mutex);
        }
}

void *pTack(void *p)
{
    for(;;)
    {
		pthread_mutex_lock (&Mutex);
	
	    if (sem % 2 == 0)
	    {
	        pthread_cond_wait (&Cond, &Mutex);
	        printf("Tack\n");
	        sem++;
	        sleep(1);
	    }
	    pthread_cond_signal (&Cond);
	    pthread_mutex_unlock (&Mutex);
    }
}






















