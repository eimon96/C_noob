#include <stdio.h>
#include <math.h>

int main()
{
	int x;
	printf("Give x: ");
	scanf("%d", &x);
	
	int pshfia[7], k = 0, n = 1;
	do
	{
		pshfia[k] = x % (int)pow(10,n) / (int)pow(10, n-1);
		k++;
		n++;
	} while (k < 7);
	
	int y = 0;
	n = 6;
	for (k = 0; k < 7; k++)
	{
		y += pshfia[k] * (int)pow(10, n);
		n--;
	}
	
	printf("y = %d", y);
	
	return 0;
}
