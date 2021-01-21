#include <stdio.h>
#include <assert.h>
#include <stdlib.h>


int main()
{
	FILE *fp;
	int buf[40];
	int i, cnt, n = 32;
	
	fp = fopen("file.dat", "wb"); 
	assert(fp != NULL);
	
	for (i = 1; i <= n; i++)
		buf[i] = 2 * i;
	
	cnt = fwrite(buf, sizeof(int), n, fp);
	
	if(cnt != n)
	{
		printf("ERROR");
		exit(-1);
	}

	printf("Number of items written: %d\n", cnt);
	fclose(fp);

	return 0;
}
