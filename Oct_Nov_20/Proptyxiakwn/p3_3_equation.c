#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, x;
	
	printf("Dwse a,b,c me enter:\n");
	scanf("\n%f", &a);
	scanf("\n%f", &b);
	scanf("\n%f", &c);
	
	if (a == 0)
	{
		// bx + c = 0
		if (b != 0)
		{
			x = -c/b;	// bx + c = 0 => x = -c/b
			printf("\nRiza: %f\n", x);
		}
		else // b = 0 => c = 0
		{
			 if (c != 0)
			 {
			 	printf("\nAdunath\n");
			 }
			 else 
			 {
			 	printf("\nTautothta\n");
			 }
		}
	}
	else // a != 0
	{
		float D = b*b - (4 * a * c);
		
		if (D > 0)
		{
			float x1 = ((-b) + sqrt(D)) / (2 * a); 
			float x2 = ((-b) - sqrt(D)) / (2 * a); 
			
			printf("\nRizes: %f, %f\n", x1, x2);
		}
		else if (D == 0)
		{
			x = (-b) / (2 * a);
			printf("\n Diplh riza: %f\n", x);
		}
		else
		{
			printf("\n Migadikes luseis, makria apo mas.\n");
		}
	}
	
	
	return 0;
}










