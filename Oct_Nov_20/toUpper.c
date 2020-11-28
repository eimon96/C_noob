#include <stdio.h>
#include <ctype.h>

int main()
{
	char c;
	printf("Start typing letters without Enter:\n\n");
	
	do
	{
		c = getche();
		printf(" -> ");
		
		if (islower(c))
		{
			putchar(toupper(c));
		}
		else 
		{
			putchar(tolower(c));
		}
		printf("\n");
		
	} while(c != '.');
	
	
	system("pause");
	return 0;
}


