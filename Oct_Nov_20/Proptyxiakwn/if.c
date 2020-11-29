#include <stdio.h>

int main ()
{
    int a, b, c;
    int Max;
    
    printf ("Euresh max\n\n");
    printf ("1st: "); scanf ("%d", &a);
    printf ("2nd: "); scanf ("%d", &b);
    printf ("3rd: "); scanf ("%d", &c);
    
    Max = a;
    if (b > Max)
        Max = b;
    Max = (c > Max) ? c: Max;
    
    printf ("Max: %d Pos:", Max);
    
    if (Max == a) 
        printf("  1st ");
    if (Max == b)
        printf("  2nd ");
    if (Max == c)
        printf("  3rd ");
        
    return 0;
}
