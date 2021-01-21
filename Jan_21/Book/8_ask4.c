#include <stdio.h>


struct paral
{
	float a, b;
};

float paralArea(struct paral *c);


int main()
{
	struct paral pr;
	float area;
	
	printf("a: ");
	scanf("%f", &pr.a);
	printf("\nb: ");
	scanf("%f", &pr.b);
	
	area = paralArea(&pr);
	
	printf("\nArea: %.1f", area);
	
	return 0;
}


float paralArea(struct paral *c)
{
	return(((*c).a) * ((*c).b));
}
