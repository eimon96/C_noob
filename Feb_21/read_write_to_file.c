#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


int main()
{
  FILE *pFin,*pFout;
  char k;
  pFin  = fopen("src.txt","r"); assert(pFin!=NULL);
  pFout = fopen("dest.txt","w");
  
  k = getc(pFin);
  while(k!=EOF)
  {
      putc(k, pFout);
	  k = getc(pFin);
  }
  fclose(pFin);
  fclose(pFout);



  return 0;
}
