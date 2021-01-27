#include <stdlib.h>
#include <stdio.h>

int *func(int *pS);

int main ()
{
  int x,*px;
  x=12;
  printf("\nprior to function call, address(x)=%d   x=%d\n",&x,x);
  px=func(&x);
  printf("\nAfter function call, address(x)=%d   x=%d  adrress(px)=%d  px=%d\n",&x,x,&px,px);
  
  
  return 0;
}


int *func(int *pS)
{
  int x=47,*ptemp;
  ptemp=&x;
  *pS=*ptemp+13;
  printf("\nwithin function, address(x)=%d   x=%d\n",&x,x);
  printf("\nwithin function, address(pS)=%d   address(ptemp)=%d\n",&pS,&ptemp);
    
  return(pS);
}

