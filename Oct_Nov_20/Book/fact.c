#include <stdio.h>

int fact(int n);

int main()
{
	int n;
	
	do{
		printf("Dwse arithmo: ");
		scanf("%d", &n);
	}while(n < 0);
	
	printf("\nn! = %d\n", fact(n));
	
	return 0;
}


/*
// aplh
int fact(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else
	{
		int f = 1, i;
		for (i=1; i<=n; i++)
			f *= i;
		return (f);	
	}
}
*/


// anadromikh
int fact(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else
		return(fact(n-1)*n);
	
}













