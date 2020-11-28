/*-----------------------------------------------------------------------------------*
 * When the coefficient of x^2 is zero, the equation is solved as a first order one. *
 * ----------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PRECISION 1e-6

int main()
{
  float a,b,c, D, r1,r2, r,im;
  printf( "This program provides the roots of the second order equation\n" );
  printf( "\t\t\tax^2+bx+c=0\n" );
  printf( "\nGive parameter a:"); scanf("%f",&a );
  printf( "\nGive parameter b:"); scanf("%f",&b );
  printf( "\nGive parameter c:"); scanf("%f",&c );

  if (fabs(a)<PRECISION)
  {
      printf( "\t\t%.9f*x + %.9f = 0\n",b,c ) ;
      printf( "There exists a single root (it has turned to a binomial:\n" );
      r=-c/b;
      printf( "r = %.9f",r );
  }
  else
  {
    printf( "\t\t%.9f*x^2 + %.9f*x + %.9f = 0\n",a,b,c ) ;
    D = b*b-4*a*c;    // Determinant
    printf("D=%f\n\n",D);

    if(D<0)  // If D<0, there exist two conjugate complex roots
    {
      printf( "There exist two conjugate complex roots:\n" );
      r=-b/(2*a);
      im=sqrt(-D)/(2*a);
      printf( "r1 = %.9f + j%.9f\n",r,im );
      printf( "r2 = %.9f - j%.9f",r,im );
    }

    else if (fabs(D)<PRECISION)    // fabs -> float,   abs -> integer
    {                          // If D=0, there exists a double real root
      printf( "There exists a double root:\n" );
      printf( "r1 = r2 = %.9f\n", -b/(2*a) );
    }

    else // If D>0, there exist two real roots
    {
      printf( "There exist two real roots:\n" );
      r1=(-b+sqrt(D))/(2*a);
      r2=(-b-sqrt(D))/(2*a);
      printf("r1=%.9f\nr2=%.9f\n",r1,r2 );
    } // end of else
  }

  printf("\n\n\n\n");
  return 0;
}



