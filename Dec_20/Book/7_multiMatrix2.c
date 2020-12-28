#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main()
{
	int **pmatr, i;
	
	printf("address of pmatr=%d\n\n", &pmatr);
	pmatr = (int **) malloc(4 * sizeof(int *));
	
	for (i = 0; i < 4; i++)
	{
		pmatr[i] = (int *) malloc(11000000 * sizeof(int));
		assert(pmatr[i] != NULL);
		printf("address of pmatr[%d]=%d\n", i, &pmatr[i]);
		printf("address of pmatr[%d][%d]=%d\n", i, 0, &pmatr[i][0]);
		printf("address of pmatr[%d][%d]=%d\n\n", i, 10999999, &pmatr[i][10999999]);
	}
	for (i = 3; i >= 0; i--) 
		free(pmatr[i]);
	
	free(pmatr);
	
	return 0;
	}
