#include<stdio.h>

int main()
{
	
	char name1[12] = "abcd";

char name2[12] = "ef";

strcpy(name1,name2);

printf( "%s\n", name1 );

return 0;
}
