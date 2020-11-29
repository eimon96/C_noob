#include <stdio.h>

int main()
{
	int a,b,c;
	
	printf("Dwse 3 arithmous me enter:\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	int maxx = a;
	maxx = (b > maxx) ? b : maxx;
	maxx = (c > maxx) ? c : maxx;
	
	printf("\nMax: %d\n", maxx);
	
	int pos = 0;
	printf("\nThesh: \n");
	(maxx == a) ? printf("1h\n") : pos;
	(maxx == b) ? printf("2h\n") : pos;
	(maxx == c) ? printf("3h\n") : pos;
	
	return 0;
}
