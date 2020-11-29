#include <stdio.h>

int main(int argc, int **argv)
{
    int A, B;
    int C, D, E, F; 
    system ("chcp 1253");  //??a??af? a? t???e? se Linux
    printf ("Basikes arithmitikes prakseis me akeraious\n");
    printf ("========================================\n\n");
    printf ("Prwtos arithmos: ");
    scanf ("%d",&A);
    printf ("Deyteros arithmos: ");
    scanf ("%d", &B);
    C = A + B;
    D = A - B;
    E = A * B;
    F = A / B;
    printf ("Sum : %d\n", C);
    printf ("Sub : %d\n", D);
    printf ("Mult : %d\n", E);
    printf ("Div  : %d\n", F);
    return 0;;
}
