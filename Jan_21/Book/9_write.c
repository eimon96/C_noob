#include<stdio.h>

int main()
{
	FILE *fp;
	char ch;
	
	fp = fopen("test.txt","w");
	
	if (fp == NULL)
		printf("\t\tFILE ERROR: Exit program\n");
	else
		do
		{
			ch = getchar();
			putc(ch, fp);
		} while (ch != '$');
	
	fclose(fp);
	
	return 0;
}
