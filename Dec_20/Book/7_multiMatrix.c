#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, rowNumber = 3, columnNumber = 5;
	float **matrixPointer;	// ** == diplos deikths
	
	matrixPointer = (float **) malloc(rowNumber * sizeof(float *));
	
	for(i = 0; i < rowNumber; i++)
		matrixPointer[i] = (float *) malloc(columnNumber * sizeof(float));
	
	
	for(i = 0; i < rowNumber; i++)
		free(matrixPointer[i]);
	
	free(matrixPointer);
	
	
	return 0;
}
