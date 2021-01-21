#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	fp = fopen("test.txt", "r");
	
	char s[6];
	int i = 0;
	
	if (fp == NULL)
	{
		printf("\t\tFILE ERROR: Exit program\n");
		exit(1);
	}
	else
	{
		do
		{
			s[i] = getc(fp);
			i++;
		}while (s[i] != EOF && i < 6);
		
		if (strcmp(s, "Markoo") == 0)
			printf("Polo!");
		else
			printf("%s", s);
	}
	
	fclose(fp);
	
	return 0;
}
