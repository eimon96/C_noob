#include <stdio.h>

/*
float func(float x, int n)
{
	float p = x; // eixe static
	
	while ((n-1) > 0)
	{
		p = p * x;
		n--;
	}
	
	return (p);
}
	
	
int main()
{
	int i;
	
	for (i=2; i<6; i++)
		printf("%.2f\n", func(2.0, i));
	
	return 0;
}

// dinei tis dunameis tou 2: 2^2, 2^3, 2^4, 2^5
// me to static pou exei sto dipla px den trexei

*/


float pown(float x, int n)
{
	float p = x;
	
	while (n-1)		//while(any non-zero integer) == while (1) => loop runs infinitely!!!!!
	{
		p = p * x;
		n--;
	}
	
	return (p);
}


int main()
{
	printf( "%.2f", pown(2.0, 10));
	
	return 0;
}

// upologizei to 2^10


