#include <stdio.h>

int main()
{
	char x = 'A', y;
	int i = 78;
	float f1;
	
	y = (char)i;
	printf("i = %d, y = %c \n", i, y);
	
	f1 = (float)x;
	printf("x = %c, f1 = %f", x, f1);
	
	
	return 0;
}
