#include<stdio.h>
#include<math.h>


#define NAME "tape2.txt"


int main()
{
	FILE *fp;
	char pchar[16];
	int i;
	float x[5];
	
	fp = fopen(NAME, "w");
	
	for (i = 0; i < 5 ;i++)
		fprintf(fp, "nm%d.dat\n", i + 1);
	
	fclose(fp);
	
	fp = fopen(NAME, "r");
	
	for (i = 0; i < 5; i++)
	 printf("line %d: %s\n", i + 1, fgets(pchar, 15, fp));
	
	fclose(fp);
	
	fp = fopen("data.dat", "w");
	
	for (i = 0; i < 5; i++)
		x[i] = sqrt(i);
		
	fwrite(x, sizeof(x), 1, fp);
	
	fclose(fp);
	fp = fopen("data.dat", "r");
	
	for (i = 0; i < 5; i++)
	{
		fscanf(fp, "%f", &x[i]);
		printf("x[%d]=%f\n", i, x[i]);
	}
	
	fclose(fp);
	
	return 0;
}
