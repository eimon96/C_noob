#include <stdio.h>

int main()
{
	//a
	char a_char[4][21];
	int i = 0;
	
	do
	{
		printf("Give string no%d: ", i+1);
		gets(a_char[i]);
		i++;
		
	}while (i < 4);
	
	for (i = 0; i < 4; i++)
	{
		printf("\n");
		puts(a_char[i]);
	}
	
	//b
	int j, counterJ = 0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < (21-1); j++) //21-1 gia to \0
		{
			if (a_char[i][j] == 'J')
			{
				counterJ++;
				printf("\n%dh emfanish J, sth thesh a_char[%d][%d]", counterJ, i, j);
			}	
		}	
	}
	
	//c
	int a_int[4][4];
	
	printf("\n\nDwse 16 arithmous me enter:\n");
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			scanf("\t%d", &a_int[i][j]);
			
			
	for (i = 0; i < 4; i++)
	{
		printf("\n");
		for (j = 0; j < 4; j++)
			printf("%d\t", a_int[i][j]);
	}
	
	
	//d
	for (j = 0; j < 4; j += 3)
	{
		int gin = 1;
		for (i = 0; i < 4; i++)
		{
			if (a_int[i][j] < -6 || a_int[i][j] > 5)
				gin *= a_int[i][j];
		}
		printf("\nGinomeno %dhs sthlhs ektos [-6,5]: %d", j+1, gin);
	}
	
	return 0;
}


















