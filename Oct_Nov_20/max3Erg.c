#include <stdio.h>

int main()
{
	int a, b, c;
	
	printf("Dwse tous arithmous me enter:\n");
	scanf("%d", &a); scanf("%d", &b); scanf("%d", &c);
	
	
	int maxx = a;
	if (b>maxx) maxx = b;
	if (c>maxx) maxx = c;
	
	printf("max = %d", maxx);
	
	return 0;
}
