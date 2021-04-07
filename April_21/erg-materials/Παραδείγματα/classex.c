//################################################################################
//fork4.c
//2o Παράδειγμα με Fork και wait. 
//--------------------------------------------------------------------------------
//Η αρχική διεργασία δημιουργεί πέντε διεργασίες παιδιά. 
//Περιμένει τον τερμιατισμό της κάθε διεργασίας παιδί με τη σειρά που τις 
//δημιούργησε. Στη συνέχεια μετατρέπεται σε εντολή ls (ls -l). 
//Κάθε παιδί καθυστερεί (μέσω sleep) για ένα τυχαίο χρονικό διάστημα.
//Θα μπορούσε κάθε διεργασία να τυπώσει το pid των... αδελφών της ή να ξέρει την
//σειρά της (αν δημιουργήθηκε ως 1ο ή 2ο ή... παιδί);
//================================================================================
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void DoA ();
void DoB ();
void DoC ();
void DoD ();


int InitPID;

int main (int argc, char **argv)
{
    int id;
    
    
    
    printf ("Scenario is starting.....\n");
    InitPID = getpid ();
    
    DoA ();
}

void DoA ()
{
    int pr;
    printf (" I am Process A, my ID = %d, my Father's ID = %d \n", getpid (), getppid ());
    pr = fork ();
    if (pr != 0)
    {
        sleep (20);
        printf ("I am Process A and I am about to end\n");
    }
    else
    {
        DoB ();
    }
}

void DoB ()
{
    int pr1, pr2, t;
    printf (" I am Process B, my ID = %d, my Father's ID = %d \n", getpid (), getppid ());
    pr1 = fork ();
    if (pr1 != 0)
    {
        t = waitpid (pr1, NULL, 0);
        pr2 = fork ();
        if (pr2 != 0)
        {
            //t = waitpid (pr1, NULL, 0);
            t = waitpid (pr2, NULL, 0);
            //t = wait (NULL);
            sleep (2);
            printf ("I am Process B and I am about to end\n");
        }
        else
        {
            DoD ();
        }
    }
    else
    {
        DoC ();
    }
}

void DoC ()
{
    printf (" I am Process C, my ID = %d, my Father's ID = %d \n", getpid (), getppid ());
    sleep (5);
    printf ("I am Process C and I am about to end\n");
}

void DoD ()
{
    printf (" I am Process D, my ID = %d, my Father's ID = %d \n", getpid (), getppid ());
    sleep (15);
    printf ("I am Process D and I am about to end\n");
}
    


    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*
    InitPID = getpid ();
    for (i = 0; i < 5; i++)
    {
        id = fork ();
        if (id == 0)
            break;
        ChIds[i] = id;
    }
    if (getpid () != InitPID)
        DoChild ();
    else
        DoFather (ChIds);
}

void DoChild ()
{
    srand (getpid ());
    int R = rand () % 16 + 10;
    printf ("I am child with pid: %d and i will sleep for %d seconds\n", getpid (), R);
    sleep (R);
    printf ("Child with pid: %d terminated\n", getpid ());
}

void DoFather (int ChIds[])
{
    int i;
    int t;
    printf ("Father: I have the following kids: ");
    for (i = 0; i < 5; i++)
        printf ("%d, ", ChIds[i]);
    printf ("\n");
    for (i = 0; i < 5; i++)
    {
        t = waitpid (ChIds[i], NULL, 0);
        printf ("Father: Child %d with id %d terminated.\n", i + 1, t);
    }
    printf ("Father: All Children terminated. Let us list directory files");
    char *Par[3];
    Par[0] = "ls";
    Par[1] = "-l";
    Par[2] = NULL;
    execvp ("ls", Par);
}
*/
