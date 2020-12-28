#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define N 50
 
int main()
{
	int *parr;
	
	parr = (int *) malloc(N * sizeof(int));
	assert(parr != NULL);
	
	int n;
	for(n = 0; n < N; n++)
	{
		printf("\nArray[%d]: ", n + 1);
		scanf("%d", &parr[n]);
		
		if (parr[n] == 0)
			break;
	}
	
	n = 0;
	printf("\n\nNums: ");
	while(parr[n] != 0)
	{
		if (n == N - 1 || parr[n + 1] == 0)
		{
			printf(" %d ", parr[n]);
		}
		else
			printf(" %d, ", parr[n]);
			
		n++;
	}
	
	free(parr);	
	
	
	return 0;
}






