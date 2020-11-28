#include <stdio.h>

int main()
{
	int x1=4, x2=-17, x3=10, x4;
	
	x3 = ++x1 - --x2;
	printf("x1=%d, x2=%d, x3=%d\n", x1, x2, x3);
	
	x4=((x1<1000) || !((x2-x3)>(x1=x1+8)));	
	// to x4 pairnei timh 1 h 0 dld true h false analoga me to result ths boolean
	printf("x1=%d, x4=%d, %d\n",x1,x4,((x1>3) && !(x4/x2)));
	
	return 0;
}
