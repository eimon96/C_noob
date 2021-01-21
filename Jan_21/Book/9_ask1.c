#include <stdio.h>

#define filename "ask1.txt"

int main()
{
	FILE *fp;
	fp = fopen(filename, "r+");
	
	char ch;
	
	if (fp == NULL)
	{
		printf("\t\tFILE NOT FOUND\n");
	}
	else
	{
		ch = getc(fp);
		while (ch != EOF)
		{
			if ((int) ch >= 65 && (int) ch <= 90)
			{
				ch = tolower(ch);
				printf("%c", ch);
				ch = fgetc(fp); 
			} else if ((int) ch >= 97 && (int) ch <= 122)
			{
				ch = toupper(ch);
				printf("%c", ch);
				ch = fgetc(fp); 
			} else
			{
				printf("%c", ch);
				ch = fgetc(fp); 
			}
		}
	}
	
	
	fclose(fp);
	
	return 0;
}
