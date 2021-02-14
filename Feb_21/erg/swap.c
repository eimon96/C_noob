#include <stdio.h>

void swap (int *, int *);

int main (int argc, char **argv)
{
	int a;
	int b;
	
	int *x; int *y;
	x = &a;
	y = &b;
	
	a = 10;
	b = 20;
	
	swap (x, y);
	//swap (&a, &b);
	
	printf ("main: %d  %d\n", a, b);
	
	
}

void swap (int *Var1, int *Var2)
{
	int tmp;
	tmp = *Var1;
	*Var1 = *Var2;
	*Var2 = tmp;
	printf ("In function : %d   %d\n", *Var1, *Var2);
}
