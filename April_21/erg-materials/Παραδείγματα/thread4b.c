/*
=====================================================================
Thread 4b
---------------------------------------------------------------------
Δημιουργεί 3 threads μέσω των οποίων αυξάνεται η τιμή κάθε θέσης 
ενός πίνακα ακεραίων κατά 6. Κάθε thread αυξάνει όλο τον πίνακα κατά
μία τιμή.
Μία λύση στο προηγούμενο πρόβλημα.
=====================================================================
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

struct ThreadData
{
    int ID;
    int *Mat;
    int Size;
    pthread_mutex_t *Mutex;
};

void *tfunc1 (void *);
void ShowMat ();

int main (int argc, char **argv)
{
    srand (time (NULL));
    pthread_t thr1, thr2, thr3;
    pthread_mutex_t M;
    struct ThreadData Dat1, Dat2, Dat3;
    int *Matrix;
    int r;
    Matrix = (int *) malloc (1000 * sizeof (int));
    for (r = 0; r < 1000; r++) 
        Matrix [r] = 0;
    pthread_mutex_init (&M, NULL);
    Dat1.ID = 1;
    Dat1.Mat = Matrix;
    Dat1.Size = 1000;
    Dat1.Mutex = &M;
    Dat2.ID = 2;
    Dat2.Mat = Matrix;
    Dat2.Size = 1000;
    Dat2.Mutex = &M;
    Dat3.ID = 3;
    Dat3.Mat = Matrix;
    Dat3.Size = 1000;
    Dat3.Mutex = &M;
    r = pthread_create (&thr1, NULL, tfunc1, &Dat1);
    r = pthread_create (&thr2, NULL, tfunc1, &Dat2);
    r = pthread_create (&thr3, NULL, tfunc1, &Dat3);
    pthread_join (thr1, NULL);
    pthread_join (thr2, NULL);
    pthread_join (thr3, NULL);
    ShowMat (Matrix, 1000);
}

void *tfunc1 (void *p)
{
    struct ThreadData *t;
    int i;
    t = (struct ThreadData *) p;
    for (i = 0; i <= t->Size; i++)
    {
        pthread_mutex_lock (t->Mutex);
        int v = t->Mat[i];
        usleep (rand () % 10000);
        v = v + t->ID;
        t->Mat[i] = v;
        pthread_mutex_unlock (t->Mutex);
    }
}

void ShowMat (int *M, int N)
{
    int i;
    for (i = 0; i <N; i++)
        printf ("%3d: %d\n", i, M[i]);
}
    
    
