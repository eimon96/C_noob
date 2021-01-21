#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	
	int buf[40], i, cnt, n = 24;
	
	fp = fopen("test.txt","rb"); 
	assert(fp != NULL);
	
	cnt = fread(buf, sizeof(int), n, fp);
	
	if (cnt > n)
	{
		printf( "ERROR");
		exit(-1);
	}
	
	printf("Number of items read: %d\n", cnt);
	fclose(fp);
	
	return 0;
}
