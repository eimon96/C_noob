#include <stdio.h>

void f1(char *pe);


int main()
{
	int a = 8, *pb;
	
	f1("gnimmargorP larudecorP");
	
	pb = &a; a = 14; *pb = 13;
	printf( "\n\n\ta=%d\n", a);
	return 0;
}


void f1(char *pe)
{
	char *ps;
	ps = pe;
	while (*pe) 
		pe++;
	do
	{
		pe--;
		printf( "%c", *pe);
	}while(pe > ps);
}
