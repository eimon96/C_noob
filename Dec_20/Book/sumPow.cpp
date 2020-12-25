#include <stdio.h>

int find_sum(int k);

int main()
{
	int k;
	
	printf("Dwse k: ");
	scanf("%d", &k);
	
	printf("\nSum: %d", find_sum(k));
	
	return 0;
}


int find_sum(int k)
{
	if (k == 1)
		return (4);
	else
		return ( (k+1)*(k+1) + find_sum(k-1) );
}
