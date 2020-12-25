#include <stdio.h>
#include <math.h>

double calcPi(int k);

int main()
{
	int k;
	double p;
	
	do
	{
		printf( "\nGive a big positive integer (k): " );
		scanf("%d",&k);
		
	} while (k<0);
	
	p = sqrt(6 * calcPi(k));
	
	printf( "\nThe approximate value of pi is %lf",p );
	
	return 0;
}

double calcPi(int k)
{
	double sum;
	
	if (k == 1) 
		return(1.0);
	else
	{
		sum = (1.0 / (k*k)) + calcPi(k-1);
		return(sum);
	}
}
