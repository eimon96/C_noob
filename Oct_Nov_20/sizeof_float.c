#include <stdio.h>
#include <float.h>

int main()
{
	float numFloat = FLT_MAX;
	double numDouble = DBL_MAX;
	
	printf("float is %d bytes\n", sizeof(float));
	printf("double is %d bytes\n\n", sizeof(double));
	
	printf("max float: %e, min float: %e\n", numFloat, FLT_MIN);	//%f grafetai kanonika
																	//%e grafetai se exp notation
	printf("max double: %e, min double: %e\n\n", numDouble, DBL_MIN);
	
	
	system("pause");
	return 0;
}
