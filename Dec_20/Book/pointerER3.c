#include <stdio.h>


int f(int *i)
{
	return((*i) + 1);
}

int main()
{
	int n = 10;
	printf( "%d",f(&n) );
	
	return 0;
}
