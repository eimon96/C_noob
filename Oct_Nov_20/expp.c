#include <stdio.h>

int main()
{
	int x=10; int y=20; 
	int z;
	
	z = ++x + y;
	z = --x + y;
	z = x++ +y;
	z = x-- +y;
	
	printf("x = %d, y = %d, z = %d\n", x, y, z);
	
	
	system("pause");
	return 0;
}
