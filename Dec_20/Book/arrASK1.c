#include <stdio.h>

int main()
{
	char array[6];
	
	int i;
	for (i = 0; i < 6; i++)
	{
		printf("\nGive element no %d: ", i+1);
		scanf("\n%c", &array[i]);
	}
	
	//a
	int min = (int)array[0];
	printf("\n< 75: ");
	for (i = 0; i < 6; i++)
	{
		int y = (int)array[i];
		if (y <= 75)
			printf("\t%c", array[i]);
		if (y < min)
			min = y;
	}
	//b
	printf("\nMin: %c", min);
	
	
	//c
	printf("\n!= b,c,d: ");
	for (i = 0; i < 6; i++)
	{
		switch(array[i])
		{
			case('b'):
			case('c'):
			case('d'): break;
			default: printf("%c\t", array[i]);
		}
	}


	
	
	return 0;
}
