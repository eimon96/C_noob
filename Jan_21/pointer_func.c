#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int *incr(int *pkitsos);

int main()
{
  int *pscore, *pm, num;

  num=32;
  pscore=&num;

  printf( "\n\n\taddr(num)=%d  addr(pscore)=%d  addr(pm)=%d  pscore=%d\n\n\t*pscore=%d\n\n",&num,&pscore,&pm,pscore,*pscore );

  pm=incr(pscore);

  printf( "\tpm=%d  num=%d\n\n\n",pm,num );

  return 0;
}


int *incr(int *pk)
{
  int x;
  x=*pk;

  printf( "\tPrior: addr(pk)=%d  pk=%d  addr(x)=%d  x=%d\n\n",&pk,pk,&x,x);
  x=x+10;

  *pk=x;
  printf( "\t*pk=%d\n\n",*pk);

  return(pk);
}


