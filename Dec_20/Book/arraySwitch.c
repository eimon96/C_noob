#include <stdio.h>

int main()
{
	float array[6];
	
	int i;
	for (i = 0; i < 6; i++)
	{
		switch(i)
		{
			case(0):
				printf("Give 1st number: ");
				break;
			case(1):
				printf("\nGive 2nd number: ");
				break;
			case(2):
				printf("\nGive 3rd number: ");
				break;
			default:
				printf("\nGive %dth number: ", i+1);
				break;
		}
		scanf("%f", &array[i]);
	}
	
	float maxx = array[0];
	int count = 0;
	
	for (i = 1; i <= 6; i++)
	{
		if (array[i] > array[i-1])
			maxx = array[i];
		if (array[i-1] > 0)
			printf("\n\narray[%d]>0: %f", i-1, array[i-1]); 
		if (array[i-1] >= 1.05 && array[i-1] <= 50.8)
			count++;
	}
	
	printf("\nMax: %f", maxx);
	printf("\nCount: %d", count);
	
	return 0;
}
