#include <stdio.h>

int main (int argc, char **argv)
{
	int N;
	int Num;
	int i;
	int Sum;
	int P;
	int CountP;
	int Even;
	float AVG;
	
	printf ("Enter number of numbers : ");
	scanf ("%d", &N);
	Sum = 0;
	CountP = 0;
	P = 1;
	Even = 0;
	for (i = 1; i <= N; i++)
	{
		printf ("Enter %d Number : ", i);
		scanf ("%d", &Num);
		
		if (Num >= 0)
		{
			Sum = Sum + Num;
			CountP ++;
		}
		else
		{
			P = P * Num;
		}
		
		if (Num % 2 == 1 || Num % 2 == -1)   //if (abs(Num) %2 == 1)
		{
			printf ("%d^2 = %d\n", Num, Num * Num);
		}
		else
		{
			Even++; // Even = Even + 1;
		}
			
	}
	
	if (CountP > 0)
	{
		AVG = (float) Sum / CountP;
		printf ("Average of positive numbers : %f \n", AVG);
	}
	else
	{
		printf ("No positive numbers\n");
	}
	
	if (N > CountP)
	{
		printf ("Product of negative numbers : %d\n", P);
	}
	else
	{
		printf ("No negative numbers\n");
	}
	printf ("Number of Even Numbers : %d\n", Even);
	return 0;
	
}





