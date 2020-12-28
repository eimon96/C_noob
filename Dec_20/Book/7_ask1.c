#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

#define N 4
#define M 3
#define K 6
#define L 2


int main()
{
	int ****parr;
	int n, m, k, l;
	
	parr = (int ****) malloc(N * sizeof(int ***));
	assert(parr != NULL); 
	
	//alocate
	for(n = 0; n < N; n++)
	{
		parr[n] = (int ***) malloc(M * sizeof(int **));
		assert(parr[n] != NULL);
		
		for(m = 0; m < M; m++)
		{
			parr[n][m] = (int **) malloc(K * sizeof(int *));
			assert(parr[n][m] != NULL);
			
			for(k = 0; k < K; k++)
			{
				parr[n][m][k] = (int *) malloc(L * sizeof(int));
				assert(parr[n][m][k] != NULL);
			}
		}
	}
	
	//read data
	int sum = 0;
	for(n = 0; n < N; n++)
		for(m = 0; m < M; m++)
			for(k = 0; k < K; k++)
				for(l = 0; l < L; l++)
				{
					printf("\nArray[%d][%d][%d][%d]: ", n + 1, m + 1, k + 1, l + 1);
					scanf("%d", &parr[n][m][k][l]);
					if (parr[n][m][k][l] != 0)
						sum += parr[n][m][k][l];
				}
	
	//print sum non-zero values
	printf("\n\nSum: %d", sum);
	
	
	// free memory
	for(n = N - 1; n >= 0; n--)
	{
		for(m = M - 1; m >= 0; m--)
		{
			for(k = K - 1; k >= 0; k--)
				free(parr[n][m][k]);
			
			free(parr[n][m]);
		}
		
		free(parr[n]);
	}
	
	free(parr);	
	
	
	return 0;
}





