#include <stdio.h>

int main()
{
	
	int numSpaces=0;
	char ch;
	printf( "Give a sentence:\n" );
	
	while ((ch=getchar()) != '\n')
	{
		if (ch==' ') numSpaces++;
	}
	
	printf( "\n\nThe number of spaces is %d\n",numSpaces);
	
	
	return 0;
	
}
