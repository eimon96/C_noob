/* Without function declaration, CALL TO UNDEFINED FUNCTION "square" */

#include <stdio.h>
#include <stdlib.h>

float quadratic(float w, int a, int b, int c)
{
  float z;
  z=a*square(w)+b*w+c;
  return(z);
}
float square(float x)
{
  return(x*x);
}

int main()
{
  float y = 4, z1,z2;
  z1=square(y);
  z2=quadratic(y,4,2,1);
  printf("z1=%f  z2=%f\n",z1,z2);
  return 0;
}

