#include <stdio.h>

int main ()
{
	int i;
	char ch;
	char name[20];
	
	scanf ("%d", &i);
	scanf ("\n");
	gets (name);
	
	printf ("\n\n\n%d\n", i);
	printf ("*%s*\n", name);
	
	return 0;
	
}
