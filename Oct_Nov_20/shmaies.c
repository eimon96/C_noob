#include <stdio.h>

int main()
{
	int x = 219;
	
	printf("1:\t%-5d\n", x);
	printf("2:\t%+5d\n", x);
	printf("3:\t% d\n", x);
	printf("4:\t%#o\n", x);
	printf("5:\t%#x\n", x);
	printf("6:\t%#X\n", x);
	printf("7:\t%05d\n\n", x);
	
	
	system("pause");
	return 0;
}
