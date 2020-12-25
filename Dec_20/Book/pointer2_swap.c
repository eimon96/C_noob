#include <stdio.h>

void swap(int *pa, int *pb);


int main()
{
	int x = 10, y = 25;
	
	printf( "Prior to function execution: x=%d, y=%d\n", x, y);
	
	swap(&x, &y);
	printf( "After function execution: x=%d, y=%d\n", x, y);
	
	return 0;
}

void swap(int *pa, int *pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}
