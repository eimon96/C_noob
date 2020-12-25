#include <stdio.h>

int main()
{
	int N = 5;	//psaxnoume N!
	int P = 1;
	int i = 1;
	
	while (i <= N)
	{
		P *= i;
		i++;
	}
	
	printf("%d! = %d", N, P);
	
	return 0;
}
