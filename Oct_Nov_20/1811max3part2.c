#include <stdio.h>

#define mess1 "Dothike:\n"

int main()
{
	int a, b, c;
	
	printf("Dwse tous arithmous me enter:\n");
	scanf("%d", &a); scanf("%d", &b); scanf("%d", &c);
	
	
	int maxx = a;
	if (b>maxx) maxx = b;
	if (c>maxx) maxx = c;
	
	printf("max = %d\n", maxx);
	
//	printf("Dothike: ");
	printf(mess1);
	if (maxx == a) printf("\t1os\n");
	if (maxx == b) printf("\t2os\n");
	if (maxx == c) printf("\t3os\n");
	
	system("pause");
	
	return 0;
}
