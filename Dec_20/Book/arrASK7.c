#include <stdio.h>

float aver(int arr[3][3], int size);



int main()
{
	int array[3][3], i, j;
	
	printf("Give 9 numbers with enter: \n");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &array[i][j]);
			
	for (i = 0; i < 3; i++)
	{
		printf("\n");
		for (j = 0; j < 3; j++)
			printf("%d\t", array[i][j]);
	}
	
	printf("\n\nMO: %f", aver(*array, 9));
	
	
	return 0;
}


float aver(int arr[3][3], int size)
{
	float mo = 0;
	int i, j;
	
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			mo += arr[i][j];
			
	mo /= size;
	
	return (mo);
	
}




