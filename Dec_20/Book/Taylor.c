#include <stdio.h>
#include <stdlib.h>
#include <math.h> // pow(x,k) == x^k

double calcPi(int k);
int fact(int n);
double calcSin(double x, int n);
double calcCos(double x, int n);

int main()
{
	double deg, x, hm, sun;
	int n;
	
	printf("Dwse gwnia se moires: ");
	scanf("%lf", &deg);
	printf("\nDwse n gia tis seires Taylor: ");
	scanf("%d", &n);
	
	x = calcPi(57000) * deg / 180.0;
	
	hm = calcSin(x, n);
	sun = calcCos(x, n);
	
	printf("\nsin(%.2lf) = %lf, cos(%.2lf) = %lf", deg, hm, deg, sun);
	
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


int fact(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else
		return (n * fact(n-1));
}


double calcSin(double x, int n)
{
	int i;
	double y = 0;
	
	for (i = 0; i <= n; i++)
	{
		if (i == 0) 
			y = y + x;
		else
			y += pow(-1, i) * pow(x, 2 * i + 1) / fact(2 * i + 1);
	}
	return (y);
}


double calcCos(double x, int n)
{
	int i;
	double y = 0;
	
	for (i = 0; i <= n; i++)
	{
		if (i == 0) 
			y = y + 1;
		else
			y += pow(-1, i) * pow(x, 2 * i) / fact(2 * i);
	}
	return (y);
}


// den trexei, oute tou vivliou












