#include <stdio.h>
#include <string.h>

int main()
{
	char str[2][41];
	int i;
	
	for (i = 0; i < 2; i++)
	{
		printf( "\nGive string no %d (up to 40 characters): ", i+1 );
		gets(str[i]);
	}
	printf("\n\n");
	
	if (strlen(str[0]) + strlen(str[1]) <= 40) 
		strcat(str[0],str[1]);
	else
		printf( "\nERROR! The string cannot be concatenated." );
	
	printf( "\nConcatenated string: %s", str[0] );	
	return 0;
}
