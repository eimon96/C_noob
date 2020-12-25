#include <stdio.h>
#include <math.h>

int main()
{
	int arr_int[3][3];
	int i, j;
	
	printf("Give 9 numbers with enter: \n");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &arr_int[i][j]);
		
	for (i = 0; i < 3; i++)
	{
		printf("\n");
		for (j = 0; j < 3; j++)
		{
			printf("\t%d", arr_int[i][j]);
		}
	}
	
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		int min = abs(arr_int[i][0]);
		int sthlh = 0 + 1;
		printf("\n%dh grammh", i+1);
		for (j = 0; j < 3; j++)
		{
			if (abs(arr_int[i][j])< min)
			{
				min = abs(arr_int[i][j]);
				sthlh = j + 1;
			}
		}
		printf("\tmin: %d\tsthlh: %d", min, sthlh);
		
	}
	
	int gin = arr_int[0][1] * arr_int[1][1] * arr_int[2][1];
	printf("\n\nGinomeno 2hs sthlhs: %d", gin);
	
	
	
	return 0;
}
