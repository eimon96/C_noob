#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


int main()
{
  int *start, size;
     printf("Type the size: ");
     scanf("%d", &size);
     start = (int *) malloc (size * sizeof(int));
 
  start[0]=13;
  start[1]=start[0]-1; 
 
     
     printf("\n\naddress(start)=%d     address(start[0])=%d", &start,&start[0]);    
     
     
     free(start);

int mitsos[14];
printf("\n\nmitsos(start)=%d     address(mitsos[0])=%d", &mitsos,&mitsos[0]);    
     

  return 0;
}
