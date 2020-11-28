#include <stdio.h>
#define MAX_CHAR 80

int main()
{
	char str[MAX_CHAR];
	int times;
	
	printf("Grapse mia leksh: \n");
	scanf("%s", str);			// de xreiazetai & sta strings
	printf("Loops: \n");
	scanf("%d", &times);
	
	int i;
	for (i=1; i<=times; i++)
	{
		printf("\n%s", str);
	}
	
	
	return 0;
}
