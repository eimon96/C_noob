#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

#define N 3		//array 3x3 -> NxN



int **allocB(int size1, int size2);
void frB(int **deikt, int size1);
void getB(int **pB1, int size);

void showB(int **parr, int size);
void substi(int **pB1, int **pB2);


int main()
{
	int **pb1, **pb2;
	
	
	pb1 = allocB(N, N);
	pb2 = allocB(N, N);	
	
	getB(pb1, N);
	getB(pb2, N);
	
	
	printf("\nBefore: ");
	showB(pb1, N);
	showB(pb2, N);
	
	substi(pb1, pb2);
	
	printf("\nAfter: ");
	showB(pb1, N);
	showB(pb2, N);
	
	
	frB(pb1, N);
	frB(pb2, N);
	
	
	return 0;
}




int **allocB(int size1, int size2)
{
	int **parr;
	
	parr = (int **) malloc(size1 * sizeof(int *));
	assert(parr != NULL);

	int n;
	for (n = 0; n < size1; n++)
	{
		parr[n] = (int *) malloc(size2 * sizeof(int));
		assert(parr[n] != NULL);
	}
	
	return(parr);	
}



void frB(int **deikt, int size1)
{
	int n;
	for(n = size1 - 1; n >= 0; n--)
	{
		free(deikt[n]);
	}
	
	free(deikt);
}



void getB(int **pB1, int size)
{
	int n, m;
	
	for (n = 0; n < size; n++)
		for (m = 0; m < size; m++)
		{
			printf("\nB[%d][%d]: ", n + 1, m + 1);
			scanf("%d", &pB1[n][m]);
		}
}



void showB(int **parr, int size)
{
	printf("\n\n");
	
	int n, m;
	for(n = 0; n < size; n++)
	{
		printf("\n");
		for(m = 0; m < size; m++)
			printf("\t%d", parr[n][m]);
	}
}



void substi(int **pB1, int **pB2)
{
	int n, m;
	for(n = 0; n < N; n++)
		for(m = 0; m < N; m++)
			pB2[n][m] = abs(pB1[n][m]);	
}












