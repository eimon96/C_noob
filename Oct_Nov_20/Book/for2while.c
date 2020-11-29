#include <stdio.h>

int main()
{
	int n;
	for (n=4;n>0;n--)
	{
		printf( "%d,",n / 2 );
	}
	printf("\n\n");
	
	
	//(b) 
	n=4;
	while (n>0)
	{
		printf( "%d,",n/2 );
		n--;
	}
	printf("\n\n");
	//(c) 
	n=4;
	while (n>0)
	{
		n--;
		printf( "%d,",n/2 );
	}
	
	
	
	return 0;
}
