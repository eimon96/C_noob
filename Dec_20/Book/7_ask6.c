#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

float **allocA(int size1, int size2);
void frA(float **parr, int size);
void getA(float **parr, int size1, int size2);
void showA(float **parr, int size1, int size2);
float **addArrays(float **pArr1, float **pArr2, int size1, int size2);



int main()
{
	int size1 = 0, size2 = 0;
	float **pa1, **pa2, **pa3;
	
	do
	{
		printf("\nSize1 (<=10): ");
		scanf("%d", &size1);
	} while (size1 > 10 || size1 <= 0);
	
	do
	{
		printf("\nSize2 (<=10): ");
		scanf("%d", &size2);
	} while (size2 > 10 || size2 <= 0);
	
	
	pa1 = allocA(size1, size2);
	pa2 = allocA(size1, size2);
	//pa3 = allocA(size1, size2);	//de xreiazetai gt ekana alloC mesa sthn function addArrays
	
	getA(pa1, size1, size2);
	getA(pa2, size1, size2);
	
	printf("\nA1: ");
	showA(pa1, size1, size2);
	printf("\nA2: ");
	showA(pa2, size1, size2);
	
	
	pa3 = addArrays(pa1, pa2, size1, size2);
	
	printf("\nSum: ");
	showA(pa3, size1, size2);
	
	
	frA(pa1, size2);
	frA(pa2, size2);
	//frA(pa3, size2);			//needed? dunno
	
	
	return 0;
}







float **allocA(int size1, int size2)
{
	float **parr;
	
	parr = (float **) malloc(size1 * sizeof(float *));
	assert(parr != NULL);
	
	int i;
	for(i = 0; i < size1; i++)
	{
		parr[i] = (float *) malloc(size2 * sizeof(float));
		assert(parr[i] != NULL);
	}
	
	return (parr);	
}






void frA(float **parr, int size)
{
	
	int i;
	for(i = size - 1; i >= 0; i--)
	{
		free(parr[i]);
	}
	
	free(parr);
}






void getA(float **parr, int size1, int size2)
{
	int i, j;
	for (i = 0; i < size1; i++)
		for (j = 0; j < size2; j++)
			do
			{
				printf("\nA[%d][%d] (>0): ", i + 1, j + 1);
				scanf("%f", &parr[i][j]);
			} while (parr[i][j] <= 0);
	
}






void showA(float **parr, int size1, int size2)
{
	printf("\n\n");
	
	int i, j;
	for(i = 0; i < size1; i++)
	{
		printf("\n");
		for(j = 0; j < size2; j++)
			printf("\t%f", parr[i][j]);
	}
}







float **addArrays(float **pArr1, float  **pArr2, int size1, int size2)
{
	float **parr;
	int i, j;
	
	parr = allocA(size1, size2);	//
	
	for(i = 0; i < size1; i++)
		for(j = 0; j < size2; j++)
			parr[i][j] = pArr1[i][j] + pArr2[i][j];
			
	return (parr);
}




