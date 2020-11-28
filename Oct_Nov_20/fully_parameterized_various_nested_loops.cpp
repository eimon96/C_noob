/* Exponentiation is implemented (i.e. a real number, 'x', raised to the power of an integer, 'pow_coef').
   lowerLimit <= x <= upperLimit                                                                          */

#include <stdio.h>
#include <math.h>
#define MY_ZERO 1E-6

int main()
{
  int i,j,pow_coef,noOfNumbers;
  float lowerLimit, upperLimit,x,y;
  
  printf("\nGive the lower limit:  ");  scanf("%f",&lowerLimit);
  do
  {
  	printf("\nGive the upper limit (>lowerLimit):  ");  scanf("%f",&upperLimit);
  } while (upperLimit<=lowerLimit);
  
  do
  {
  	printf("\nGive the number (>0) of real numbers that will be exponentiated:  ");  scanf("%d",&noOfNumbers);
  } while (noOfNumbers<=0);
  
  printf("\nGive the power coefficient (integer): ");  scanf("%d",&pow_coef);               
  
  for (i=0;i<noOfNumbers;i++)
  {
    printf("\n\n\nNo %d of %d exponentiations:\n",i+1,noOfNumbers);
    do
	{
      printf("\nGive a real number within [%.3f,%.3f]: ",lowerLimit,upperLimit);
      scanf("%f",&x);               
    } while ((x<lowerLimit) || (x>upperLimit));    
    if (pow_coef == 0)  y=1.0;
    else if (fabs(x)<MY_ZERO)
	{
      if (pow_coef>0)  y=0.0;
      else
	  {
        printf("\n\nERROR!! The result can't be defined\n\n");
		getchar();
        break;
      }  
    }  // end of internal ELSE-IF
    else
	{
      y=x;
      
      for (j=1;j<=(abs(pow_coef)-1);j++)
	  {
        y=y*x;
      }
      if (pow_coef<0) y=1/y;
    }   // end of external ELSE-IF
    
	printf("\n\t(%.3f)^%d equals to %.3f\n",x,pow_coef,y);
  }  // end of FOR(i)
  
    
  return 0;
}

