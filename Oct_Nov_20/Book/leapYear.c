#include <stdio.h>

int main()
{
	int year;
	
	printf( "Year: " );
	scanf( "%d", &year );
	
	if (((year%400)==0) || (!((year%100)==0) && ((year%4)==0)))
		printf( "\nYear %d is a leap year\n",year );
	else 
		printf( "\nYear %d is not a leap year\n",year );
		
	system("pause");
	return 0;
}
