#include <stdio.h>

enum weekDays {Sun, Mon, Tue, Wen, Thu, Fri, Sat};

int main()
{
	enum weekDays day1, day2;
	day1 = Mon;
	day2 = Tue;
	
	int diaf = day2 - day1;
	
	printf("day1: %d\n", day1);
	printf("day2: %d\n", day2);
	printf("Days between: %d\n", diaf);	//is 1 the right ans?
		
	if (day1 < day2)
		printf("day1 is followed by day2\n");
	
	return 0;
}
