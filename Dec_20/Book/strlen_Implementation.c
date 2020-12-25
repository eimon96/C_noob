#include <stdio.h>

int strlenImplementation(char stringName[]);


int main()
{
	char str[100];
	
	printf("Give a string: ");
	gets(str);
	
	printf("Length: %d", strlenImplementation(str));
	
	
	return 0;	
}


int strlenImplementation(char *stringName)
{
	int i = 0;
	while (stringName[i] != '\0')
		i++;
		
	return (i);
}
