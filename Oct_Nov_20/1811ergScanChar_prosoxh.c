#include <stdio.h>

int main()
{
	system("chcp 1253");
	int day; //hmera gennhshs
	int month; //mhnas gennhshs
	int year; //etos gennhshs
	float height; //upsos
	char n; //orwti gramma onomatos

	printf("Eisagete hmera, mhna kai etos gennhsews: \n");
	scanf("%d%d%d",&day, &month, &year);
	
	printf("Eisagete upsos se metra: \n");
	scanf("%f", &height);
	
	printf("Eiagete prwto gramma onomatos: \n");
	
	//prosoxhhhhhhhhhh diavazei to enter apo prin ws character - solition \n sthn arxh
	scanf("\n%c", &n);
	
	printf("%d/%d/%d, %1.2f, %c\n", day, month, year, height, n);	
	
	system("pause");
	return 0;
}
