#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mikos(char yy[11]);

struct parT
{
	int x[4];
	char y[3][11];
};


int main()
{
 
 
 
  FILE *pFout;
  struct parT t;
  int i;
  
  pFout=fopen("my_results.txt","w");
  
  
  for (i=0;i<4;i++) t.x[i]=i*i;
  strcpy(t.y[0],"One");
  strcpy(t.y[1],"Eleven");
  strcpy(t.y[2],"Twenty");
  
  for (i=0;i<3;i++)
  {
  	printf("\n\n\tlength of string no %d= %d",i+1,mikos(t.y[i]));
    fprintf(pFout,"\nstring no %d consists of %d characters",i+1,mikos(t.y[i]));  
  }
  
  
  
  fclose(pFout);



  return 0;
}


int mikos(char yy[11])
{
  return(strlen(yy));	
	
}
