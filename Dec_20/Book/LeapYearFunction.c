#include <stdio.h>

#define COMMON "a common year...\n\n"
#define LEAP "a leap year!!!\n\n"

void leapYN(int year);

int main()
{
	int year;
	
	do
	{
		
		printf("Give year or enter 0 to exit: ");
		scanf("%d", &year);
		
		if (year == 0) break;
			
		leapYN(year);
		
	} while(1);
	
	return 0;
}

void leapYN(int year)
{
	
	if (year % 4 != 0)
		printf("%d is "COMMON, year);
	else if (year % 100 != 0) 
		printf("%d is "LEAP, year);
	else if (year % 400 != 0)
		printf("%d is "COMMON, year);
	else
		printf("%d is "LEAP, year);
		
}
