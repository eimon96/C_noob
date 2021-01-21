#include <stdio.h>
#include <assert.h>

#define N 3

struct structTypeT
{
	char nm[40];
	char srnm[40];
	char phNo[15];
};

int main()
{
	struct structTypeT id[N];
	FILE *f1;
	int i;
	
	f1 = fopen("file.dat", "rb"); 
	assert(f1 != NULL);
	
	for (i = 0; i < N; i++)
		fread(&id[i], sizeof(id[i]), 1, f1);
	
	fclose(f1);
	
	f1 = fopen("file2.dat", "wb"); 
	assert(f1 != NULL);
	
	for (i = 0; i < N; i++)
		fwrite(&id[i], sizeof(id[i]), 1, f1);
	
	fclose(f1);
	
	return 0;
}
