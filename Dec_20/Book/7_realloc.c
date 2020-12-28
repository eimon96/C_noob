#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p1, *p2;
	p1 = (int *) malloc(10 * sizeof(int));
	
	*p1 = 35;
	*(p1 + 1) = -12;
	
	printf("Prior to realloc:\n\t*p1=%d\n\tAddress is %d\n", *p1, p1);
	
	p2 = (int *) realloc(p1, 20 * sizeof(int));	//could use p1 as well

	printf("After realloc:\n\t*p2=%d\n\tAddress is %d\n", *p2, p2);
	
	free(p2);
	free(p1);
	
	return 0;
}


//asxeto: kinhths upodiastolhs -diplhs- akriveias arithmoi = DOUBLE
