#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int **allocA(int size1, int size2);
void frA(int **parr, int size);
void getData(int **pArr, int size1, int size2);
void showA(int **parr, int size1, int size2);

int **multiplyArrays(int **pArr1, int **pArr2, int size1, int size2, int size3);



int main()
{
	int k, n, m;
	int **pa1, **pa2, **pa3;
	
	printf("(kxn)x(nxm)\n\n");
	printf("\nk = ");
	scanf("%d", &k);
	printf("\nn = ");
	scanf("%d", &n);
	printf("\nm = ");
	scanf("%d", &m);
	
	pa1 = allocA(k, n);
	pa2 = allocA(n, m);
	
	getData(pa1, k, n);
	getData(pa2, n, m);
	
	printf("\nA1: ");
	showA(pa1, k, n);
	printf("\nA2: ");
	showA(pa2, n, m);
	
	
	pa3 = multiplyArrays(pa1, pa2, k, n, m);
	
	printf("\nMulti: ");
	showA(pa3, k, m);
		
	
	frA(pa1, n);
	frA(pa2, m);
	
	
	return 0;
}





int **allocA(int size1, int size2)
{
	int **parr;
	
	parr = (int **) malloc(size1 * sizeof(int *));
	assert(parr != NULL);
	
	int i;
	for(i = 0; i < size1; i++)
	{
		parr[i] = (int *) malloc(size2 * sizeof(int));
		assert(parr[i] != NULL);
	}
	
	return (parr);
}

void frA(int **parr, int size)
{
	int i;
	for(i = size - 1; i >= 0; i--)
	{
		free(parr[i]);
	}
	
	free(parr);
}

void getData(int **pArr, int size1, int size2)
{
	int i, j;
	for (i = 0; i < size1; i++)
		for (j = 0; j < size2; j++)
		{
			printf("\nA[%d][%d]: ", i + 1, j + 1);
			scanf("%d", &pArr[i][j]);
		}
}

void showA(int **parr, int size1, int size2)
{
	printf("\n\n");
	
	int i, j;
	for(i = 0; i < size1; i++)
	{
		printf("\n");
		for(j = 0; j < size2; j++)
			printf("\t%d", parr[i][j]);
	}
	
}

int **multiplyArrays(int **pArr1, int **pArr2, int size1, int size2, int size3)
{
	int k, n, m;
	int **parr;
	
	parr = allocA(size1, size3);
	
	for(k = 0; k < size1; k++)        
		for(m = 0; m < size3; m++)    
		{    
			parr[k][m] = 0;    
			for(n = 0; n < size2; n++)        
				parr[k][m] += pArr1[k][n] * pArr2[n][m];   
		}       
		
	return (parr);
}


