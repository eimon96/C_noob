#include <stdio.h>

int main()
{
	int lotto[6], i = 1, flag;
	
	while (i <= 6)
	{
		flag = 0;
		
		printf("\nNumber %d: ",i);
		scanf("%d", &lotto[i-1]);
		
		if (lotto[i-1] < 1 || lotto[i-1] > 49)
			flag ++;
			
		int j;
		for (j = 0; j < (i-1); j++)
		{
			if (lotto[j] == lotto[i-1])
				flag++;
		}
		if (flag)
			printf("Invalid number! Try again\n\n");
		else
			i++;
	}
	
	printf("\n\nYour numbers: ");
	for (i = 0; i < 6; i++)
	{
		printf(" %d ", lotto[i]);
	}
	
	
	
	return 0;
}
