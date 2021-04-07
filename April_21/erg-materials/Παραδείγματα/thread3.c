/*
=====================================================================
Thread 3
---------------------------------------------------------------------
Δημιουργεί 3 threads μέσω των οποίων αυξάνεται η τιμή κάθε θέσης 
ενός πίνακα ακεραίων κατά 5. Κάθε thread αυξάνει ένα τμήμα του πίνακα.
Η εργασία ολοκληρώνεται γρηγορότερα με τα threads; 
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
    int From;
    int To;
};

void *tfunc1 (void *);
void CheckResult ();

int main (int argc, char **argv)
{
    pthread_t thr1, thr2, thr3;
    struct ThreadData Dat1, Dat2, Dat3;
    int *Matrix;
    int r;
    Matrix = (int *) malloc (3000000 * sizeof (int));
    for (r = 0; r < 3000000; r++) 
        Matrix [r] = 0;
    Dat1.ID = 1;
    Dat1.Mat = Matrix;
    Dat1.From = 0;
    Dat1.To = 999999;
    Dat2.ID = 2;
    Dat2.Mat = Matrix;
    Dat2.From = 1000000;
    Dat2.To = 1999999;
    Dat3.ID = 3;
    Dat3.Mat = Matrix;
    Dat3.From = 2000000;
    Dat3.To = 2999999;
    r = pthread_create (&thr1, NULL, tfunc1, &Dat1);
    r = pthread_create (&thr2, NULL, tfunc1, &Dat2);
    r = pthread_create (&thr3, NULL, tfunc1, &Dat3);
    pthread_join (thr1, NULL);
    pthread_join (thr2, NULL);
    pthread_join (thr3, NULL);
    CheckResult (Matrix);
}

void *tfunc1 (void *p)
{
    struct ThreadData *t;
    int i, j;
    t = (struct ThreadData *) p;
    for (i = t->From; i <= t->To; i++)
    {
        for (j = 1; j <= 5; j++)
            t->Mat[i] ++;
    }
}

void CheckResult (int *M)
{
    int i;
    for (i = 0; i <3000000; i++)
        if (M[i] != 5)
        {
            printf ("Error in Matrix Data\n");
            return ;
        }
    printf ("Matrix Ok!\n");
}
    
    
