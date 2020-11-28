#include <stdio.h>

int main()
{
	char ch;
	int i;
	float f1;
	
	f1 = i = ch = 'A';
	printf("ch = %c, i = %d, f1 = %2.2f\n", ch, i, f1);
	
	ch++;
	i = f1 + 2*ch;
	f1 = 2.0*ch + i;
	printf("ch = %c, i = %d, f1 = %2.2f\n", ch, i, f1);
	
	return 0;
}
