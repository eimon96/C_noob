#include <stdio.h>

void pwr(int localArray[], int arraySize);

int main()
{
	int array[4];
	int i;
	
	for(i = 0; i < 4; i++)
	{
		printf("Array[%d] = ",i+1);
		scanf("%d", &array[i]);
	}
	pwr(array,4);
	
	
	for(i = 0; i < 4; i++)
	{
		printf("\nArray[%d] = %d\n", i+1, array[i]);
	}
	
	
	return 0;
}



void pwr(int localArray[], int arraySize)
{
	int i;
	for (i = 0; i < arraySize; i++)
		localArray[i] *= localArray[i]; 
}
