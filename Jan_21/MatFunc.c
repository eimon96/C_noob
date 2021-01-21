#include <stdio.h>

float Aveg (int [], int);
void ReadMat (int [], int);
void PrintMat (int [], int);
void Sort (int [], int);
int FindMax (int[], int);
void PrintPos (int [], int, int);

int main (int argc, char **argv)
{
	int Mat[1000];
	int N;
	int Pos;
	N = 5;
	float A;
	
	ReadMat (Mat, N);	
	PrintMat (Mat, N);
	A = Aveg (Mat, N);
	printf ("Average = %f\n", A);
	//Sort (Mat, N);
	PrintMat (Mat, N);
	Pos = FindMax (Mat, N);
	printf ("Max Pos = %d, Max Value = %d\n", Pos + 1, Mat[Pos]);
	PrintPos (Mat, N, Mat[Pos]);
}

//Διάβασμα Πίνακα Ακεραίων
void ReadMat (int Pin[], int Size)
{
	int i;
	for (i = 0; i < Size; i++)
	{
		printf ("Enter Grade of Student [%d] : ", i + 1);
		scanf ("%d", &Pin[i]); 
	}
}

//Τύπωμα Πίνακα Ακεραίων
void PrintMat (int Pin[], int S)
{
	int i;
	for (i = 0; i < S; i++)
	{
		printf ("Grade of Student [%d] : %d\n", i + 1, Pin[i]); 
	}
}

//Υπολογισμός Μέσου Όρου Μονοδιάστατου 
float Aveg (int P[], int N)
{
	int i;
	int Sum;
	Sum = 0;
	for (i = 0; i < N; i++)
		Sum = Sum + P[i];
	return (float) Sum / N;
}

//Ταξινόμηση Πίνακα Ακεραίων
void Sort (int Pin[], int S)
{
	int i,j;
	int tmp;
	
	for (i = 0; i < S - 1; i++)
		for (j = i + 1; j < S; j++)
			if (Pin[i] > Pin [j])
			{
				tmp = Pin[i]; 
				Pin[i] = Pin[j]; 
				Pin[j] = tmp; 	
			}
}

//Εύρεση Θέσης Μέγιστης Τιμής Πίνακα
int FindMax (int Pin[], int S)
{
	int i;
	int Max, Posis;
	
	Max = Pin[0];
	Posis = 0;
	for (i = 1; i < S; i++)
	{
		if (Pin[i] > Max)
		{
			Max = Pin[i];
			Posis = i;
		}
	}
	return Posis;
}

//Τύπωμα Θέσεων που περιέχουν συγκεκριμένη τιμή
void PrintPos (int Pin[], int S, int Num)
{
	int i;
	printf ("Number %d found in the following positions: \n", Num);
	for (i = 0; i < S; i++)
		if (Pin[i] == Num)
			printf ("%d\n", i + 1);	
			
}


