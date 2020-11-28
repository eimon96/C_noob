#include <stdio.h>

int main()
{
	char ch;
	int numSpaces = 0;
	
	printf("Grapse kati: ");
	ch = getchar();
	
	while (ch != '\n')
	{
		if (ch == ' ') ++numSpaces;
		ch = getchar();
	}
	
	printf("Number of Spaces given: %d\n",numSpaces);
	
	system("pause");
	return 0;
}
