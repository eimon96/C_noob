#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c;
	
	printf("Dwse pleyra a = ");
	scanf("%f", &a);
	printf("Dwse pleyra b = ");
	scanf("%f", &b);
	
	c = sqrt(a*a + b*b);
	printf("c = %.2f\n", c);
	
	
	return 0;
}
