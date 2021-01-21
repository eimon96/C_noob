#include <stdio.h>

int Add (int, int);


int main (int argc, char **argv)
{
	int X1 = 10;
	int X2 = 20;
	int Y1 = 15;
	int Y2 = 25;
	int R1;
	int R2;
	//....
	R1 = Add (X1, X2);
	printf ("R1 = %d\n", R1);
	//.......
	R2 = Add (Y1, Y2);
	printf ("R2 = %d\n", R2);
	
	//printf ("%d  %d  %d   %d\n", X1, X2, Y1, Y2);
}


int Add (int Num1, int Num2)
{
	int Res;
	Res = Num1 + Num2;
	//Num1++; 
	//Num2++;
	//printf ("***%d  %d\n", Num1, Num2);
	return Res;	
	//....
} 
