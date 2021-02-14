#include <stdio.h>

int main()
{
	int a = 9;
	int b = 6;
	
	a = b + a;  // a = 15
	b = a - b;	// b = 9 = 15 - 6
	a = a - b;	// a = 15 - 9 = 6
	
	
	printf("a = %d, b = %d", a, b);
	
	return 0;
	
	
}
