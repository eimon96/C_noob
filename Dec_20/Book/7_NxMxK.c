#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define N 3
#define M 2
#define K 250


int main()
{
	int i, j;
	
	//Desmeush mnhmhs
	float ***arr_ptr;
	arr_ptr = (float ***) malloc(N * sizeof(float **));
	assert(arr_ptr != NULL);

	for (i = 0; i < N; i++)
	{
		arr_ptr[i] = (float **) malloc(M * sizeof(float *));
		assert(arr_ptr[i] != NULL);
		
		for (j = 0; j < M; j++)
		{
			arr_ptr[i][j] = (float *) malloc(K * sizeof(float));
			assert(arr_ptr[i][j] != NULL);
		}
	}
	
	
	//Apodesmeysh mnhmhs
	for (i = 2; i >= 0; i--)
		for (j = 1; j >= 0; j--)
			free(arr_ptr[i][j]);
	for(i = 2; i >= 0; i--)
		free(arr_ptr[i]);
		
	free(arr_ptr);
	
	
	
	return 0;
}







