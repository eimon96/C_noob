#include <stdio.h>


struct timeT
{
	int hour, min, sec;	
};

void TimeInSec(struct timeT *t);

int main()
{
	struct timeT tme;
	
	printf("Hours: ");
	scanf("%d", &tme.hour);
	printf("\nMin: ");
	scanf("%d", &tme.min);
	printf("\nSec: ");
	scanf("%d", &tme.sec);
	
	TimeInSec(&tme);
	
	return 0;
}


void TimeInSec(struct timeT *t)
{
	printf("\n\nTime in Seconds: %f", (*t).sec + (*t).min * 60.0 + (*t).hour * 3600.0);
	
}
