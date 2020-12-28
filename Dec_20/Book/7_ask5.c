#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define N 3		//array 3x3 -> NxN



double **allocB(int size1, int size2);
void frB(double **deikt, int size1);
void getB(double **pB1, int size);

void showB(double **parr, int size);
void sumRev(double **pB1, double **pB2, double **pB3);


int main()
{
	double **pb1, **pb2, **pb3;
	
	
	pb1 = allocB(N, N);
	pb2 = allocB(N, N);
	pb3 = allocB(N, N);	
	
	getB(pb1, N);
	getB(pb2, N);
	
	sumRev(pb1, pb2, pb3);
	
	showB(pb1, N);
	showB(pb2, N);
	showB(pb3, N);
	
	
	frB(pb1, N);
	frB(pb2, N);
	frB(pb3, N);
	
	
	return 0;
}




double **allocB(int size1, int size2)
{
	double **parr;
	
	parr = (double **) malloc(size1 * sizeof(double *));
	assert(parr != NULL);

	int n;
	for (n = 0; n < size1; n++)
	{
		parr[n] = (double *) malloc(size2 * sizeof(double));
		assert(parr[n] != NULL);
	}
	
	return(parr);	
}



void frB(double **deikt, int size1)
{
	int n;
	for(n = size1 - 1; n >= 0; n--)
	{
		free(deikt[n]);
	}
	
	free(deikt);
}



void getB(double **pB1, int size)
{
	int n, m;
	
	for (n = 0; n < size; n++)
		for (m = 0; m < size; m++)
		{
			printf("\nB[%d][%d]: ", n + 1, m + 1);
			scanf("%lf", &pB1[n][m]);
		}
}



void showB(double **parr, int size)
{
	printf("\n\n");
	
	int n, m;
	for(n = 0; n < size; n++)
	{
		printf("\n");
		for(m = 0; m < size; m++)
			printf("\t%f", parr[n][m]);
	}
}



void sumRev(double **pB1, double **pB2, double **pB3)
{
	int n, m;
	for(n = 0; n < N; n++)
		for(m = 0; m < N; m++)
			pB3[n][m] = 1.0 / (pB1[n][m] + pB2[n][m]);
	
	
	
}














