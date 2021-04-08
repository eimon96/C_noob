// WWWDOT - GOOGLE = DOTCOM

#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned int w, d, o, t, g, l, e, c, m;
	
	FILE *fp;
	fp = fopen ("output.txt", "w");
	if (fp == NULL)
	{
		printf ("Could not create file\n");
		exit(1); 
	}
	
	for (w = 1; w <= 9; w++)
	for (d = 1; d <= 9; d++)
	for (o = 0; o <= 9; o++)
	for (t = 0; t <= 9; t++)
	for (g = 1; g <= 9; g++)
	for (l = 0; l <= 9; l++)
	for (e = 0; e <= 9; e++)
	for (c = 0; c <= 9; c++)
	for (m = 0; m <= 9; m++)
	if (w*100000 + w*10000 + w*1000 + d*100 + o*10 + t - (g*100000 + o*10000 + o*1000 + g*100 + l*10 + e) == d*100000 + o*10000 + t*1000 + c*100 + o*10 + m)
		if (w*100000 + w*10000 + w*1000 + d*100 + o*10 + t - (g*100000 + o*10000 + o*1000 + g*100 + l*10 + m) == d*100000 + o*10000 + t*1000 + c*100 + o*10 + e)
			fprintf(fp, "%d%d%d%d%d%d - %d%d%d%d%d%d = %d%d%d%d%d%d\n",w,w,w,d,o,t,g,o,o,g,l,e,d,o,t,c,o,m);
				
	
	fclose(fp);
	return 0;
}
