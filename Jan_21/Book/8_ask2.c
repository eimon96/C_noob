#include <stdio.h>

struct metricT 
{
	int feet, inches;
};

void readMetric(struct metricT *pengl);

int main()
{
	struct metricT height;
	readMetric(&height);
	
	double cm;
	cm = (height.feet * 12 + height.inches) * 2.54;
	
	printf("\ncm: %lf", cm);

	return 0;
}



void readMetric(struct metricT *pengl)
{
	printf("\nFeet: ");
	scanf("%d", &pengl -> feet);
	printf("\nInches: ");
	scanf("%d", &(*pengl).inches);	//idio me thn panw scanf 2os tropos
}
