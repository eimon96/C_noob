#include <stdio.h>

int cube(int n);

int main()
{
	int number = 5;
	printf("original value %d\n", number);
	
	number = cube(number);
	printf("new value %d", number);
	
	return 0;	
}

int cube(int n)
{
	return(n*n*n);
}
