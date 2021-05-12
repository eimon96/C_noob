#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>


void *pOne(void *);
void *pTwo(void *);
void *pThree(void *);


int sem;
pthread_mutex_t Mutex;
pthread_cond_t Cond;


int main(int argc, char **argv)
{
    pthread_t thr0, thr1, thr2;
    
    sem = 3;

    pthread_mutex_init (&Mutex, NULL);
    pthread_cond_init (&Cond, NULL);

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
        pthread_mutex_lock (&Mutex);
        
        if (sem % 3 == 0)
        {
			pthread_cond_wait (&Cond, &Mutex);
        	printf("One\n");
        	sem++;
       	    sleep(1);
        }
            pthread_cond_signal (&Cond);
            pthread_mutex_unlock (&Mutex);
        }
}


void *pTwo(void *p)
{
    for(;;)
    {
		pthread_mutex_lock (&Mutex);
	
	    if (sem % 3 == 1)
	    {
	        pthread_cond_wait (&Cond, &Mutex);
	        printf("Two\n");
	        sem++;
	        sleep(1);
	    }
	    pthread_cond_signal (&Cond);
	    pthread_mutex_unlock (&Mutex);
    }
}


void *pThree(void *p)
{
    for(;;)
    {
		pthread_mutex_lock (&Mutex);
	
	    if (sem % 3 == 2)
	    {
	        pthread_cond_wait (&Cond, &Mutex);
	        printf("Three\n");
	        sem++;
	        sleep(1);
	    }
	    pthread_cond_signal (&Cond);
	    pthread_mutex_unlock (&Mutex);
    }
}



