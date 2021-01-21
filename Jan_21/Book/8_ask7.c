#include <stdio.h>

struct circleT
{
	float x, y, r;
};

void readCircle(struct circleT *pc);
void printCircle(struct circleT *pc);
float circleArea(struct circleT *pc);


int main()
{
	struct circleT cir;
	float area;
	
	readCircle(&cir);
	printCircle(&cir);
	
	area = circleArea(&cir);
	
	
	printf("\nArea: %.1f", area);
		
	return 0;
}


void readCircle(struct circleT *pc)
{
	printf("X: ");
	scanf("%f", &pc -> x);
	printf("\nY: ");
	scanf("%f", &pc -> y);
	printf("\nR: ");
	scanf("%f", &pc -> r);
}


void printCircle(struct circleT *pc)
{
	printf("\n\nX: %.1f", (*pc).x);
	printf("\nY: %.1f", (*pc).y);
	printf("\nR: %.1f", (*pc).r);	
}


float circleArea(struct circleT *pc)
{
	return((*pc).r * (*pc).r * 3.14);
}








