#include <stdio.h>

int main()
{
	FILE *fp;
	fp = fopen("test.txt", "r+");
	
	char ch;
	
	if (fp == NULL)
		printf( "\t\tFILE ERROR: Exit program\n" );
	else
	{
		ch = getc(fp);
		while (ch != EOF)
		{
			printf("%c", ch);
			ch = getc(fp);
		}
	}
	
	
	fclose(fp);
	
	return 0;
}

