#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 4
#define LOWER -6
#define UPPER 5

int main()
{
	int a_int[N][N],i,j,column_prod_0,column_prod_3;
  	char a_char[N][21];
	//-----------------------------------------------------------------------
	// (i)
	i=1;
	do
	{
   		printf("\n\nGive string no %d:  ",i);
		gets(a_char[i-1]);
		i++;
  	}	while (i<5);
	printf("\n\nArray a_char:");
	for (i=0;i<N;i++) printf("\n\ta_char[%d] = %s\n",i,a_char[i]);
	//-----------------------------------------------------------------------
	// (ii)
	for (i=0;i<N;i++)
		for (j=0;j<strlen(a_char[i]);j++)
		{
			if (a_char[i][j]=='J')	printf("\n'J' appears at place no %d of string no %d",j+1,i+1);    	
		}                                              
	//-----------------------------------------------------------------------
	// (iii)
	printf("\n\n");
	for (i=0;i<N;i++)
		for (j=0;j<N;j++)
		{
			printf("\na_int[%d][%d]:  ",i+1,j+1);
			scanf("%d",&a_int[i][j]);
		}
	printf("\n\nArray of integers:");
	for (i=0;i<N;i++)
	{
      	printf("\n");
		for (j=0;j<N;j++)  printf("\t%d",a_int[i][j]);
	}
	//-----------------------------------------------------------------------
	// (iv)
  	column_prod_0=1;
	column_prod_3=1;
	for (i=0;i<N;i++)
	{
		if ((a_int[i][0]<LOWER) || (a_int[i][0]>UPPER))  column_prod_0=column_prod_0*a_int[i][0];
		if ((a_int[i][3]<LOWER) || (a_int[i][3]>UPPER))  column_prod_3=column_prod_3*a_int[i][3];
	}
	printf("\n\tProduct of first column's values: %d",column_prod_0);
	printf("\n\tProduct of last column's values: %d",column_prod_3);
  return 0;
}

