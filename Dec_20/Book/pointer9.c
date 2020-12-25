#include <stdio.h>

float funcPwr(float x, int n);

int main()
{
	float (*pfuncPwr)(float,int) = NULL;
	
	printf("Address of function funcPwr=%d\n", funcPwr);
	
	pfuncPwr = &funcPwr;
	
	printf("Pointer pfuncPwr points to address %d\n", pfuncPwr);
	
	printf("\nDirect function call: %.2f^%d =%.2f\n", 2.0,6, funcPwr(2.0,6));
	
	printf(" Function call via function pointer: %.2f^%d = %.2f\n", 2.0,6, pfuncPwr(2.0,6));
	
	
	return 0;
}


float funcPwr(float x, int n)
{
	int i;
	float prod = 1.0;
	
	if (n == 0) 
		return 1.0;
	else
	{
		for (i = 1; i <= n; i++) 
			prod = prod * x;
		
		return prod;
	}
}
