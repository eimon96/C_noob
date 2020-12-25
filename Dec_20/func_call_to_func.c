#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float get_data(float x);
float my_exp(float y);
/*----------------------------------------------------------------------*/
int main()
{
  float i,x,y;
  for (i=0.1;i<=0.31;i=i+0.1)
  {
    x=i*(i+1);
    y=get_data(x);
    printf("\ni=%f\tx=%.5f\ty=%.5f",i,x,y);
  }
  return 0;
}

/*----------------------------------------------------------------------*/
float my_exp(float y)
{
  float z;
  if (y>200.0)
  {
    printf( "Argument to exp() =%f\n",y );
    getch();
  }
  else
  {
    if (y<-20.0) z=0.0;
    else z=exp(y);
   }
   return(z);
}
/*----------------------------------------------------------------------*/
float get_data(float x)
{

  return(my_exp(x)+1);
}
/*----------------------------------------------------------------------*/

