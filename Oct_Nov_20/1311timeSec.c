#include <stdio.h>

int main()
{
	int timeSecs, hr, min, sec;
	char chr[] = "hour"; 
	char cmin[] = "minute";
	char csec[] = "second";
	
	printf("Give me the time in seconds: ");
	scanf("%d", &timeSecs);
	
	hr = timeSecs / 3600;
	min = (timeSecs % 3600) / 60;
	sec = (timeSecs % 3600) % 60;
	
	if (hr != 1) strcat(chr, "s");
	if (min != 1) strcat(cmin, "s");
	if (sec != 1) strcat(csec, "s");
	
	
	printf("\n %d seconds = %d %s, %d %s, %d %s \n", timeSecs, hr, chr, min, cmin, sec, csec);
	
	
	return 0;
}
