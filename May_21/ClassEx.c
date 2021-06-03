
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>

void DoP0 ();
void DoP1 ();
void DoP2 ();
void DoP3 ();
void DoP4 ();

int fd[2];

int main (int argc, char **argv)
{
    int InitPID;
    
    InitPID = getpid ();
    
    DoP0 ();
    
}

void DoP0 ()
{
    int idP1, idP2;
    char Buff[100];
    pipe (fd);
    
    idP1 = fork ();
    if (idP1 > 0)
    {
        printf ("P0: P1 created. I will wait until its death\n");
        //waitpid (idP1, NULL, 0);
        //printf ("P0: P1 terminated\n");
        close (fd[1]);
        read (fd[0], Buff, 100);  //Διαβάζει μέχρι 100 bytes από το σωλήνα;
        close (fd[0]);
        printf ("P0: P1 sent message %s\n", Buff);
        idP2 = fork ();
        if (idP2 > 0)
        {
            printf ("P0: P2 created. I will wait until its death\n");
            waitpid (idP2, NULL, 0);
            printf ("P0: Its time for me to become someting else\n");
            execlp ("ps", "ps", "-ef", NULL);
        }
        else
        {
            DoP2 ();
        }
        
    }
    else
    {
        DoP1 ();
    }
}

void DoP1 ()
{
    char Mess[100];
    strcpy (Mess, "This is a message from P1 to P0\n");
    printf ("P1: I am %d and I am alive\n", getpid ());
    close (fd[0]); 
    write (fd[1], Mess, strlen (Mess) + 1);  
    close (fd[1]);
    sleep (5);
    printf ("P1: I am about to die\n");
}

void DoP2 ()
{
    int idP3, idP4;
    printf ("P2: I am alive\n");
    sleep (3);
    idP3 = fork ();
    if (idP3 > 0)
    {
        idP4 = fork ();
        if (idP4 > 0)
        {
            wait (NULL);
            printf ("P2: One of my children died...\n");
            printf ("P2: I am about to terminate\n");
        }
        else
        {
            DoP4 ();
        }
        
    }
    else
    {
        DoP3 ();
    }

}

void DoP3 ()
{
    printf ("P3: I will sleep\n");
    sleep (8);
    printf ("P3: Bye Bye\n");
}

void DoP4 ()
{
    printf ("P4: I will sleep\n");
    sleep (5);
    printf ("P4: Bye Bye\n");
}



/*
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
