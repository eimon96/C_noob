/*
=====================================================================
Contition 2
---------------------------------------------------------------------
Δύο παίκτες (ανεξάρτητα threads) παίζουν σκάκι. Κάθε παίκτης παιζει
με τη σειρά του. Πρώτα πρέπει να παίξει ο λευκός. Ο συγχρονισμός
γίνεται με Contition Variabla (η οποία απαιτεί τη χρήση mutex) . 
=====================================================================
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

void *WhiteFunc (void *);
void *BlackFunc (void *);

//--------------------------------------------------------------
//Ολικές Μεταβλητές
//Κακή προγραμματιστική τακτική, αλλά βοηθάει στην κατανόηση
//του παραδείγματος μειώνοντας τους... περίεργους pointers
//--------------------------------------------------------------

int NextMove;
pthread_mutex_t Mutex;
pthread_cond_t Cond;



int main (int argc, char **argv)
{
    pthread_t WhiteP, BlackP;
    NextMove = 1;
    pthread_mutex_init (&Mutex, NULL);
    pthread_cond_init (&Cond, NULL);
    pthread_create (&WhiteP, NULL, WhiteFunc, NULL);
    pthread_create (&BlackP, NULL, BlackFunc, NULL);
    pthread_join (WhiteP, NULL);
    pthread_join (BlackP, NULL);
    printf ("Το παιχνίδι ολοκληρώθηκε....\n");
    return 0;
}

void *WhiteFunc (void * D)
{
    while (NextMove <= 500)
    {
        pthread_mutex_lock (&Mutex);
        //printf ("White.....\n");
        if (NextMove % 2 == 0)
            pthread_cond_wait (&Cond, &Mutex);
        printf ("White: I made my move (%d)\n", NextMove);
        NextMove ++;
        pthread_cond_signal (&Cond);
        pthread_mutex_unlock (&Mutex);
    }
}

void *BlackFunc (void * D)
{
    while (NextMove <= 500)
    {
        pthread_mutex_lock (&Mutex);
        //printf ("Black.....\n");
        if (NextMove % 2 == 1)
            pthread_cond_wait (&Cond, &Mutex);
        printf ("Black: I made my move (%d)\n", NextMove);
        NextMove ++;
        pthread_cond_signal (&Cond);
        pthread_mutex_unlock (&Mutex);
    }
}
    
