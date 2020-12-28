#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

int getSize(void);
float **allocate_2(int size1, int size2);
void free_2(float **parr, int size1);
void getData(float **ptr, int size);
void printData(float **ptr, int size);
void getMax(float **pArray, int size, int i);
float trace(float **pArray, int size);
void permuteColumns(float **pArray, int size, int column1, int column2);
void permuteLines(float **pArray, int size, int line1, int line2);

int main()
{
	int i, j, col, size;
	float **pArr;
	
	size = getSize();
	pArr = allocate_2(size, size);
	
	getData(pArr, size);
	
	printf("\n\nInitial array A:");
	printData(pArr, size);
	
	for (i = 0; i < size; i++)
		getMax(pArr, size, i);
	
	printf("\n\nTrace(A)=%f\n", trace(pArr, size));
	
	permuteColumns(pArr, size, 1, 2);
	permuteLines(pArr, size, 0, 2);
	
	printf("\n\nFinal array:");
	printData(pArr, size);
	
	free_2(pArr, size);
	
	return 0;
}


/*------------------------------------*/
int getSize(void)
{
	int size;
	do
	{
		printf(" Give the size of the array (>=3): ");
		scanf("%d", &size);
	} while (size < 3);
	
	return size;
}


/*------------------------------------*/
float **allocate_2(int size1, int size2)
{
	int i;
	float **parr;
	
	parr = (float **)malloc(size1 * sizeof(float *));
	assert(parr != NULL);
	
	for (i = 0; i < size1; i++)
	{
		parr[i] = (float *)malloc(size2 * sizeof(float));
		assert(parr[i] != NULL);
	}
	
	return(parr);
}


/*------------------------------------*/
void free_2(float **parr, int size1)
{
	int i;
	
	for (i = (size1-1); i >= 0; i--) 
		free(parr[i]);
	
	free(parr);
}


/*------------------------------------*/
void getData(float **ptr, int size)
{
	int i, j;
	
	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
		{
			printf("\nA[%d][%d]: ", i+1, j+1);
			scanf("%f", &ptr[i][j]);
		}
}


/*------------------------------------*/
void printData(float **ptr, int size)
{
	int i, j;
	for (i = 0; i < size; i++)
	{
		printf("\n");
		for (j = 0; j < size; j++) 
			printf("\t%10.4f", ptr[i][j]);
	}
}


/*------------------------------------*/
void getMax(float **pArray, int size, int i)
{
	int j, col;
	float maxim;
	
	maxim = fabs(pArray[i][0]);
	col = 0;
	
	for (j = 1; j < size; j++)
		if (fabs(pArray[i][j]) > maxim)
		{
			maxim = fabs(pArray[i][j]);
			col = j;
		}
	
	printf("\nLine %d: column %d, size=%f",i+1,col+1,fabs(pArray[i][col]));
}


/*------------------------------------*/
float trace(float **pArray, int size)
{
	int i;
	float trc = 0.0;
	
	for (i = 0; i < size; i++)
		trc=trc+pArray[i][i];
	
	return trc;
}


/*------------------------------------*/
void permuteColumns(float **pArray, int size, int column1, int column2)
{
	int j;
	float temp;
	
	for (j = 0; j < size; j++)
	{
		temp = pArray[j][column1];
		pArray[j][column1] = pArray[j][column2];
		pArray[j][column2] = temp;
	}
}


/*------------------------------------*/
void permuteLines(float **pArray, int size, int line1, int line2)
{
	int j;
	float temp;
	
	for (j = 0; j < size; j++)
	{
		temp = pArray[line1][j];
		pArray[line1][j] = pArray[line2][j];
		pArray[line2][j] = temp;
	}
}
