#include <stdio.h>

int main()
{
	//a
	int arr_int[5][5];
	int i, j;
	
	printf("Dwse 25 arithmous me enter:\n");
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			scanf("%d", &arr_int[i][j]);
			
	for (i = 0; i < 5; i++)
	{
		printf("\n");
		for (j = 0; j < 5; j++)
			printf("\t%d", arr_int[i][j]);
	}
	
	
	//b
	int b1 = 0, b2 = 0;
	for (i = 1; i <= 5; i += 2)
	{
		int sumb1 = 0;
		for (j = 0; j < 5; j++)
			sumb1 += arr_int[i-1][j];
		
		printf("\nAthroisma stoixeiwn %dhs grammhs: %d", i, sumb1);
		b1 += sumb1;
		
		if (i == 1) // 2h grammh
			for (j = 0; j < 5; j++)
				if (arr_int[i][j] > 0)
					b2 += arr_int[i][j];
	}
	printf("\nApanthsh b1: %d", b1);
	printf("\nApanthsh b2: %d", b2);
	
	
	return 0;
}



















