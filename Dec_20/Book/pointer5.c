#include<stdio.h>

int *incr(int y);


int main()
{
	int *pscore;
	
	pscore = incr(pscore);
	
	printf("pscore point to %d", *pscore);
	
	return 0;
}


int *incr(int y)
{
	//static int y; --enalaktika uncomment this kai incr()
	y = 10;
	
	return(&y);
}
