#include <stdio.h>
#include <stdlib.h>

struct metricT
{
  int feet;
  int inches;
};

void readMetric(struct metricT *peng1);

int main()
{
	struct metricT height;
	float cm;
	readMetric(&height);
	printf("\n\tGiven height is %d feet: %d inches", height.feet, height.inches);
	cm=2.54*(12*height.feet+height.inches);
	printf("\n\tHeight in cm: %.0f",cm); /*no decimal values */

	return 0;
}

void readMetric(struct metricT *peng1)
{
	printf("\n\tType height in feet:  ");
    scanf("%d", &peng1->feet);
	printf("\n\tType height in inches:  ");
	scanf("%d", &peng1->inches);
}


