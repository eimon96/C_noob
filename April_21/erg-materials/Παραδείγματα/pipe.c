//################################################################################
//Παράδειγμα με Pipe
//--------------------------------------------------------------------------------
//Δημιουργεί μία διεργασία παιδί. 
//Το παιδί στέλενει ένα μήνυμα (string) στον πατέρα και τελειώνει.
//Ο πατέρας λαμβάνει το μήνυμα, το τυπώνει και τελειώνει.
//================================================================================
#include <stdio.h>
#include <unistd.h>
#include <string.h>

void DoFather ();
void DoChild ();

int fd[2];  //Τα αρχεία που παριστούν τα άκρα του σωλήνα

int main (int argc, char **argv)
{
    printf ("Hello. I am the Father. My Id Number is : %d \n", getpid ());
    DoFather ();
}


void DoFather ()
{
    char Buff[100];
    pipe (fd); //Δημιουργείται ένας... το αρχείο fd[0] είναι άκρο του σωλήνα από το οποίο διαβάζονται τα δεδομένα και 
               //το αρχείο fd[1] είναι το άκρο στο οποίο βάζουμε τα δεδομένα. 
    int p = fork ();   //Δημιουργείται η διεργασία παιδί η οποία, μεταξύ άλλων, μοιράζεται και τον σωλήνα.
    if (p > 0)
    {
        printf ("I am the Father.I wait to read data from child....\n");
        close (fd[1]); //Κλείνει το άκρο του πατέρα στο οποίο γράφονται τα δεδομένα.
        read (fd[0], Buff, 100);  //Διαβάζει μέχρι 100 bytes από το σωλήνα;
        close (fd[0]);  //Κλείνει και το άκρο εγγραφής
        printf ("I am the father and I recieved this message : %s\n", Buff);
        printf ("Father: Bye Bye\n");
    }
    else
    {
            DoChild ();
    }
}

void DoChild ()
{
    char Mess[100] = "This is the message";
    printf ("Hello. I am the Child. My Id Number is : %d \n", getpid ());
    close (fd[0]);  //Κλείνει το άκρο του παιδιού από το οποίο διαβάζονται δεδομένα.
    write (fd[1], Mess, strlen (Mess) + 1);  //Γράφει στο άκρο εγγραφής το string με το μήνυμα (ακριβώς όσα bytes χρειάζονται
    close (fd[1]);  //Κλείνει και το άκρο εγγραφής
    printf ("Child: Bye Bye\n");
    
}

            
