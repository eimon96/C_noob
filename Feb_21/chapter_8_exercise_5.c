#include <stdio.h>
#include <stdlib.h>

struct timeT
{
  int hour;
  int min;
  int sec;
};

void TimeInSec(struct timeT *t);

int main()
{
	struct timeT tme;
	
	printf("\n\tEnter the value for hour:  ");
	scanf("%d",&tme.hour);
	printf("\n\tEnter the value for minutes:  ");
	scanf("%d",&tme.min);
	printf("\n\tEnter the value for seconds:  ");
	scanf("%d",&tme.sec);
	TimeInSec(&tme);
	return 0;
}

void TimeInSec (struct timeT *t)
{
	int tsecs;
	tsecs=(t->sec)+((t->min)*60)+((t->hour)*60*60);
	printf("\n\n\tTotal seconds in %dH:%dM:%dS are %d\n", t->hour, t->min, t->sec, tsecs);
}

