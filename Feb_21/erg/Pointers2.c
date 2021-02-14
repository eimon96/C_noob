#include <stdio.h>
#include <stdlib.h>

int * CreateMat (int, int);

int main (int argc, char **argv)
{
	int *pin, *mat;
	int N;
	int i;
	
	
	printf ("Enter Size of Matrix : ");
	scanf ("%d", &N);
	
	pin = CreateMat (N, 10);
	
	for (i = 0; i < N; i++)
	{
		printf ("Number %d : %d\n", i + 1, *(pin + i));
		
	}
	
	mat = CreateMat (10000000, 20);
	
	for (i = 0; i < 10000000; i++)
	{
		printf ("Number %d : %d\n", i + 1, *(mat + i));
		
	}
	
	free (mat);
	
	
	free (pin);
	
	return 0;
}

int * CreateMat (int N, int Val)
{
	int *temp;
	int i;
	
	temp = (int *) malloc (N *sizeof (int));
	for (i = 0; i < N; i++)
		temp[i] = Val;
	
	return temp;	
}

float Mat1[100];
float *Mat2;
Mat2 = (float *) malloc (100 * sizeof (float));

fillmat (Mat1, 100, 5.6);
fillmat (Mat2, 100, 5.6);

void fillmat (float Pin[], int Size, float Value)
{
	int i;
	for (i = 0; i < Size; i++)
		Pin[i] = Value;
}




void XYZ ()
{
	int i;
	int j = 5;
	static int k = 10;
	
	i = 10;
	j = j + 2;
	k = k + 5;
}
