#include <stdio.h>
#include <stdlib.h>

int main()
{
	int val1;
	long int val2;
	double val3;
	char str1[20]={"123456"},str2[20]={"abcd"},str3[20]={" 1234bn"};
	
	
	printf( "atoi example:\n" );
	
	val1 = atoi(str1);
	printf( "Str1 = \"%s\", Integer value = %d\n", str1, val1 );
	
	val1 = atol(str2);
	printf( "Str2 = \"%s\", Integer value = %d\n", str2, val1 );
	
	val1 = atol(str3);
	printf( "Str3 = \"%s\", Integer value = %d\n", str3, val1 );
	
	
	printf("\n\natol example:\n");
	
	val2 = atol(str1);
	printf( "Str1 = \"%s\", Long integer value = %ld\n", str1, val2 );
	
	val2 = atol(str2);
	printf( "Str2 = \"%s\", Long integer value = %ld\n", str2, val2 );
	
	
	printf( "\n\natof example:\n" );
	
	val3 = atof(str1);
	printf( "Str1 = \"%s\", Double value = %f\n", str1, val3 );
	
	val3 = atof(str2);
	printf( "Str2 = \"%s\", Double value = %f\n", str2, val3 );
	
	
	return(0);
}
