#include<stdio.h>

void cube(int *pnumber);

int main()
{
	int num;
	
	printf("Dwse akeraio: ");
	scanf("%d", &num);
	
	cube(&num);
	
	printf("\n\nKubos = %d\n", num);

	return 0;
}


void cube(int *pnumber)
{
	
	*pnumber = *pnumber * *pnumber * *pnumber;
	
}
