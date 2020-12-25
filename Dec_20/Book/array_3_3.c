#include <stdio.h>

int main()
{
	float array[3][3];
	int i, j;
	
	//read array
	for(i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			do
			{
				printf("\nGive array[%d][%d] (within [-12,24]): ", i+1, j+1);
				scanf("%f", &array[i][j]);
			}while (array[i][j] < -12 || array[i][j] > 24);
	
	//print array formal
	printf("\n\nArray:");
	for (i = 0; i < 3; i++)
	{
		printf("\n");
		for (j = 0; j < 3; j++)
			printf("\t%10.2f", array[i][j]);
	}
	
	for(j = 0; j < 3; j++)
	{
		float sum = 0;
		for (i = 0; i < 3; i++)
		{
			if (array[i][j] >= -8 && array[i][j] <= 8)
				sum += array[i][j];
		}
		printf("\n\nSum of Column %d for valus [-8,8]]: %f", j+1, sum);
	}
	
	
	return 0;
}
