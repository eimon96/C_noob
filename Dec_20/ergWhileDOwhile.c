#include <stdio.h>

int main()
{
	int Num;
	
//	printf("Enter a number between 10 and 25: ");
//	scanf("%d", &Num);
//	while (Num < 10 || Num > 25)
//	{
//		printf("Enter a number between 10 and 25: ");
//		scanf("%d", &Num);
//	}

	do
	{
		printf("Enter a number between 10 and 25: ");
		scanf("%d", &Num);
	}while (Num < 10 || Num > 25);
	
	return 0;
}
