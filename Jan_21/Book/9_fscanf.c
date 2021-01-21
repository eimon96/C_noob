// scanf(arguments) === fscanf(stdin, arguments) !!!

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
	FILE *f1, *f2;
	int i;
	
	f1 = fopen("file1.dat", "r"); 
	assert(f1 != NULL);
	
	f2 = fopen("file2.dat", "w");
	
	for (i = 0; i < N; i++)
	{
		fscanf(f1, "%s %s %s\n", id[i].nm, id[i].srnm, id[i].phNo);
		fprintf(f1, "%s %s %s\n",id[i].nm, id[i].srnm, id[i].phNo);
	}
	
	fclose(f2);
	close(f1);
	
	return 0;
}
