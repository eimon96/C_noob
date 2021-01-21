#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(void)
{
	char ch;
	FILE *fp;
	long i, last;
	
	fp = fopen("file.dat", "rb"); 
	assert(fp != NULL);
	
	fseek(fp, 0, SEEK_END);
	last = ftell(fp);
	
	for (i = 1; i <= last; i++)
	{
		fseek(fp, -i, SEEK_END);
		ch = getc(fp);
		if (ch != EOF)
			putchar(ch);
	}
	
	putchar('\n');
	fclose(fp);
	
	return 0;
}
