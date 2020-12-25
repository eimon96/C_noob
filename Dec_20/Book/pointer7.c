#include <stdio.h>
#include <string.h>

int main()
{
	char msg1[81] = {"triangular"}, msg2[] = {"angular"};
	char *pfnd;
	
	printf( "\nmsg1: %s\n", msg1);
	printf( "Address of string msg1: %d\n", msg1);
	
	pfnd = strstr(msg1,msg2);
	printf("\npfnd: %s\n", pfnd);
	printf( "Address of string handled by pointer pfnd: %d\n", pfnd);
	
	
	return 0;
}
