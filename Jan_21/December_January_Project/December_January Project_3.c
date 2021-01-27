#include <stdio.h>
#include <stdlib.h>

#define N 5

int main()
{
  int i,j,arr_int[N][N],line_sum_1,line_sum_2;  
  
  for (i=0;i<N;i++)
    for (j=0;j<N;j++)
    {
      printf("\narr_int[%d][%d]:  ",i+1,j+1);
      scanf("%d",&arr_int[i][j]);
    }
    printf("\n\nArray of integers:");
    for (i=0;i<N;i++)  {
      printf("\n");
      for (j=0;j<N;j++)  printf("\t%d",arr_int[i][j]);
    }
  
    line_sum_1=0;
	for (i=0;i<N;i=i+2)
	  for (j=0;j<N;j++)  line_sum_1+=arr_int[i][j];  
  
    line_sum_2=0;
    for (j=0;j<N;j++)
      if (arr_int[1][j]>0) line_sum_2+=arr_int[1][j];
    printf("\tsum of elements of the odd lines = %d\n",line_sum_1);    
    printf("\t sum of elements of the second line whose values are greater than 0 = %d\n",line_sum_2);    
  return 0;
}


