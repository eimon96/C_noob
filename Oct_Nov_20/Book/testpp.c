#include <stdio.h>

int main()
{
	int x = 10;
	int z;
	
	z = x++;
	z = x++;
	
	printf("z=%d, x=%d",z,x);	// z = 11; x = 12;
	return 0;
}
