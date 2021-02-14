#include <stdio.h>
#include <string.h>

int main()
{
	char msg1[81]={"triangular"};
	char *pfnd;
	printf( "\nmsg1: %s\n",msg1 );
	printf( "Address of string msg1: %d\n",msg1 );
	/* Εναλλακτικά */ printf( "Address of string msg1: %d\n",&msg1[0] );
	pfnd = strchr(msg1,'a');
	printf( "\npfnd: %s\n",pfnd );
	printf( "Address of string handled by pointer pfnd: %d\n",pfnd );

	return 0;
}
