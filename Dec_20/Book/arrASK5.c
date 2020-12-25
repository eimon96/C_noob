#include <stdio.h>

int main()
{
	char arr_char[2][15];
	int i = 0, j, k;
	
	do
	{
		printf("Give string no%d: ", i+1);
		gets(arr_char[i]);
		i++;
	}while(i < 2);
	
	for (i = 0; i < 2; i++)
	{
		printf("\n");
		puts(arr_char[i]);
	}
	
	for (i = 0; i < 2; i++)
		for (j = 1, k = 0; j < 15 , k < 15; j+=2, k++)
			arr_char[0][k] = arr_char[1][j];	
	
	
	for (i = 0; i < 2; i++)
	{
		printf("\n");
		puts(arr_char[i]);
	}
	
	
	
	return 0;
}
