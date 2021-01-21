#include <stdio.h>
#define MaxLines 10
#define MaxColumns 20

int GetNoS ();
int GetNoC ();
void ReadGrades (float [][20], int, int);
void PrintGrades (float [][20], int, int);
float TotalAverage (float [][20], int, int);
void AllStudentAverage (float [][20], int, int);
float StudentAverage (float [][20], int, int, int);
void AllStudentAverage1 (float[][20], int, int, float []);


int main (int argc, char **argv)
{
	int i, j;
	int NoS, NoC;
	float Grades[MaxLines][MaxColumns];
	float MOs[MaxLines];
	float AVG;
	float StAvg;
	
	NoS = GetNoS ();
	NoC = GetNoC ();
	
	ReadGrades (Grades, NoS, NoC);
	PrintGrades (Grades, NoS, NoC);
	AVG = TotalAverage (Grades, NoS, NoC);
	printf ("Average of all grades : %6.3f\n", AVG);
	AllStudentAverage (Grades, NoS, NoC);
	StAvg = StudentAverage (Grades, NoS, NoC, 1);
	printf ("Student 2 Average %f\n", StAvg);
	printf ("=============\n");
	AllStudentAverage1 (Grades, NoS, NoC, MOs);
	for (i = 0; i < NoS; i++)
		printf ("%f\n", MOs[i]);
	return 0;	
}

int GetNoS ()
{
	int N;
	do
	{
		printf ("Enter Number of Students (1..10) : ");
		scanf ("%d", &N);
	}
	while (N < 1 || N >10);
	return N;
}

int GetNoC ()
{
	int N;
	do
	{
		printf ("Enter Number of Courses (1..20) : ");
		scanf ("%d", &N);
	}
	while (N < 1 || N >20);
	return N;
}

void ReadGrades (float Mat[][20], int Lins, int Cols)
{
	int i, j;
	for (i = 0; i < Lins; i++)
		for (j = 0; j < Cols; j++)
		{
			printf (" Enter grade for student %d course %d : ", i + 1, j + 1);
			scanf ("%f", &Mat[i][j]);
		} 
}

void PrintGrades (float Mat[][20], int Lins, int Cols)
{
	int i, j;
	for (i = 0; i < Lins; i++)
		for (j = 0; j < Cols; j++)
		{
			printf (" Grade for student %d course %d : ", i + 1, j + 1);
			printf ("%5.2f\n", Mat[i][j]);
		} 
}

float TotalAverage (float Mat[][20], int Lins, int Cols)
{
	int i, j;
	float Sum;
	float Res;
	Sum = 0;
	for (i = 0; i < Lins; i++)
		for (j = 0; j < Cols; j++)
			Sum = Sum + Mat[i][j];
	Res = Sum / (Lins * Cols);
	return Res;
}

void AllStudentAverage (float Mat[][20], int Lins, int Cols)
{
	int i, j;
	float Sum;
	float Res;
	
	for (i = 0; i < Lins; i++)
	{
		Sum = 0;
		for (j = 0; j < Cols; j++)
		{
			Sum = Sum + Mat[i][j];
		}
		Res = Sum / Cols;
		printf ("Student %d  Average %6.3f\n", i + 1, Res);	
	}
}

float StudentAverage (float Mat[][20], int Lins, int Cols, int AA)
{
	int  j;
	float Sum;
	float Res;
	
	Sum = 0;
	for (j = 0; j < Cols; j++)
	{
		Sum = Sum + Mat[AA][j];
	}
	Res = Sum / Cols;
	return Res;
	
}

void AllStudentAverage1 (float Mat[][20], int Lins, int Cols, float MO[])
{
	int i, j;
	float Sum;
	float Res;
	
	for (i = 0; i < Lins; i++)
	{
		Sum = 0;
		for (j = 0; j < Cols; j++)
		{
			Sum = Sum + Mat[i][j];
		}
		Res = Sum / Cols;
		MO[i] = Res;
	}
}
