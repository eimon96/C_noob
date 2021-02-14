#include <stdio.h>
#include <stdlib.h>



int main()
{
  double *t,s[100];
  
  float *p;
  
  
  t=(double *)malloc(100*sizeof(double));
  p=(float *)malloc(100*sizeof(float));

  printf("Addr(s)=%d  Addr(s[0])=%d  Addr(s[99])=%d\n\n",&s,&s[0],&s[99]);

  printf("Addr(t)=%d  Addr(t[0])=%d  Addr(t[99])=%d\n\n",&t,&t[0],&t[99]);
   free(t);
  printf("Addr(p)=%d  Addr(p[0])=%d  Addr(p[99])=%d\n\n",&p,&p[0],&p[99]);


  free(p);

  return 0;
}

