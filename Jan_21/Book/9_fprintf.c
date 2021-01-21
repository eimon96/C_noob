//printf(arguments) ===í fprintf(stdout, arguments) !!!

#include <stdio.h>

int main()
{
	int cnt;
	FILE *fp;
	char *filename = "test2.txt";
	char msg[40] = "This is my song!\n";
	
	fp = fopen(filename, "w");
	cnt = fprintf(fp, "%s,yep!%d,%f,\n", msg, 21, 34.5);
	printf("Number of bytes written in %s: %d\n", filename, cnt);
	
	fclose(fp);
	
	return 0;
}
