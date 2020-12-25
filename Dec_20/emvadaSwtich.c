#include <stdio.h>
#include <math.h>


int main()
{
	int select;
	float b, u, B, r;
	
	do
	{	
		do
		{
			printf("\nTrigwno: 1\nTrapezio: 2\nKyklos: 3\nExit: 0\n");
			printf("Epilegeis: ");
			scanf("%d", &select);
			if (select == 0) exit(0);
		} while (select != 1 && select != 2 && select != 3);
		
		switch(select)
		{
			case(1):
				printf("\nDwse bash trigwnou: ");
				scanf("%f", &b);
				printf("\nDwse upsos trigwnou: ");
				scanf("%f", &u);
				printf("\nArea: %f\n\n", b*u/2.0);
				break;
			case(2):
				printf("\nDwse mikrh bash trapeziou: ");
				scanf("%f", &b);
				printf("\nDwse megalh bash trapeziou: ");
				scanf("%f", &B);
				printf("\nDwse upsos trapeziou: ");
				scanf("%f", &u);
				printf("\nArea: %f\n\n", (b+B)*u/2.0);
				break;
			case(3):
				printf("\nDwse aktina kuklou: ");
				scanf("%f", &r);
				printf("\nArea: %f\n\n", M_PI*r*r);
				break;
		}
	}while (1); // to exit(0) einai mesa sth loop
	
	
	return 0;
}
