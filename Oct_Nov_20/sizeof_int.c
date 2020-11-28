#include <stdio.h>	//gia thn printf
#include <limits.h>

int main()
{
	int numberInt = INT_MAX;
	short int numberShort = SHRT_MAX;
	long int numberLong = LONG_MAX;
		
	printf("int is %d bytes\n", sizeof(int));
	printf("short is %d bytes\n", sizeof(short));
	printf("long is %d bytes\n\n", sizeof(long));
	
	printf("max int: %d, min int: %d\n", numberInt, INT_MIN);
	printf("max short: %d, min short: %d\n", numberShort, SHRT_MIN);
	printf("max long: %d, min long: %d\n", numberLong, LONG_MIN);
	
	
	system("pause");
	return 0;
}
