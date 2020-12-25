#include <stdio.h>

int main()
{
	int numArray[5] = {1,2,3,4,5};
	int *pint;
	pint = numArray[0];
	
	printf("%d", pint);
	
//	int numArray[5] = {1,2,3,4,5};
//	int *pint, *pnum;
//	pint = numArray;
//	pnum = pint+2;	
//	
//	
//	printf("%d\t%d", *pint, *pnum);
	
	return 0;
}
