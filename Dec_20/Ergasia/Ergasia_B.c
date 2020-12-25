#include <stdio.h>
#include <string.h>


int main()
{
	//a
	float b_float[2][3][2];
	int i, j, k;
	
	printf("Dwse 12 float arithmous me enter:\n");
	for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
			for (k = 0; k < 2; k++)
				scanf("%f", &b_float[i][j][k]);
				
	//b
	float sum = 0.0;
	for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
			for (k = 0; k < 2; k++)
				if (b_float[i][j][k] >= 3 && b_float[i][j][k] <= 13)
					sum += b_float[i][j][k];
	printf("\nSum within [3,13]: %.1f", sum);
	
	//c
	char b_char[3][21];
	i = 0;
	
	while(i < 3)
	{
		printf("\nDwse %do string: ", i+1);
		scanf("\n%s", b_char[i]);
		i++;
	}
	
	for(i = 0; i < 3; i++)
	{
		printf("\n");
		puts(b_char[i]);
	}
	
	//d
	int len = strlen(b_char[0]);
	int line = 0;
	if (strlen(b_char[1]) > len)
	{
		len = strlen(b_char[1]);
		line = 1;
	}
	if (strlen(b_char[2]) > len)
	{
		len = strlen(b_char[2]);
		line = 2;
	}
	
	for (j = 0; j < 21; j++)
		if (b_char[line][j] == 'r')
			printf("\nr sth thesh: [%d,%d]", line, j);

	
	
	return 0;
}
























