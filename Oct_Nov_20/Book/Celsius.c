#include <stdio.h>

int main()
{
	float C,F;
	printf("Give temperature in Celsius: ");
	scanf("%f", &C);
	
	F = (9.0/5.0) * C + 32;
	
	printf("\nFahrenheit: %.1f\n",F);
	
	system("pause");
	return 0;
}
