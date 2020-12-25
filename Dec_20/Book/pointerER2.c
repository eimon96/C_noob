#include <stdio.h>

int *func(int *p)
{
	*p = 42;
	
	return(p);
};


int main()
{
	int p = 13;
	
	int *z;
	printf("p=%d\n",p);
	
	z = func(&p);
	printf("(*z)=%d p=%d",*z,p);
	
	return 0;
}
