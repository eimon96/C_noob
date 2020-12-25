#include<stdio.h>
#include<string.h>

int add(int *pin, int number);


int main()
{
	int aker[] = {7, 9, 6};
	
	int size = sizeof(aker) / sizeof(aker[0]);
	
	printf("%d", add(&aker, size));
	
	return 0;
}


int add(int *pin, int number)
{
	int i, r = 0;
	for(i = 0; i < number; i++)
	{
		r += *pin * *pin;
		pin++;
	}	
	return r;
	
}
