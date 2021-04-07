#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
    int *Mat1;
    int *Mat2;
    FILE *fp;
    int N,i;
    int Sum;
    //Άνοιγμα αρχείου.
    fp=fopen ("data4matrices.csv", "r");
    if (fp == NULL)
    {
        printf ("Cannot open datafile...\n");
        exit (1);
    }
    
    //Διάβασμα της 1ης γραμμής του αρχείου η οποία περιέχει το πλήθος των ζευγαριών αριθμών που ακολουθούν και άρα
    //το μέγεθος των πινάκων που θα δεσμευτούν
    fscanf(fp, "%d", &N);
    
    //Δημιουργία Πινάκων
    Mat1 = (int *) malloc (N * sizeof (int));
    Mat2 = (int *) malloc (N * sizeof (int));
    if (Mat1 == NULL || Mat2 == NULL)
    {
        printf ("Memory problem...\n");
        exit (1);
    }
    
    //Διάβασμα όλων των τιμών από το αρχείο, τοποθέτησή τους στου πίνακες και κλείσιμο αρχείου
    for (i = 0; i < N; i++)
    {
        fscanf (fp, "%d,%d", &Mat1[i], &Mat2[i]);    
    }
    fclose (fp);
    
    //Επεξεργασία.......
   
}
    
    
    
    
