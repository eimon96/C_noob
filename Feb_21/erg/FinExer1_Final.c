#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct STUD
{
	int AM;
	char Epon[31];
	char Onom[31];
	int Semester;
	float Grades[5];
	float Avg;
};

struct STUD *ReadData (char [], int *);
void WriteData (struct STUD [], int);
void SortBySemester (struct STUD [], int );
void PrintMaxAvg (struct STUD[], int);
void SortByEpon (struct STUD[], int);
void CalcAvgs (struct STUD[], int);
int CountPassedCourses (struct STUD);
void PrintStudsPassed (struct STUD [], int);
float CourseMaxGrade (struct STUD [], int, int);
void BestStudsPerCourse (struct STUD [], int);


int main (int argc, char **argv)
{
	int N;
	struct STUD *AllSt;
	AllSt = ReadData ("Exer1Data.txt", &N);
	CalcAvgs (AllSt, N);
	PrintMaxAvg (AllSt, N);
	PrintStudsPassed (AllSt, N);
	BestStudsPerCourse (AllSt, N);
	//SortBySemester (AllSt, N);
	SortByEpon (AllSt, N);
	WriteData (AllSt, N);
	
	
	return 0;
}

struct STUD *ReadData (char FN[], int *Size)
{
	FILE *fp;
	struct STUD *temp;
	int i, j, N;
	
	fp = fopen (FN, "r");
	if (fp == NULL)
	{
		printf ("Cannot open file");
		exit (1); 
	}
	
	fscanf (fp, "%d", &N);
	temp = (struct STUD *) malloc (N * sizeof (struct STUD));
	for (i = 0; i < N; i++)
	{
		fscanf (fp, "%d", &temp[i].AM);
		fscanf (fp, "%s", temp[i].Epon);
		fscanf (fp, "%s", temp[i].Onom);
		fscanf (fp, "%d", &temp[i].Semester);   //&((temp+i)->Semester)
		for (j = 0; j < 5; j++)
		{
			fscanf (fp, "%f", &temp[i].Grades[j]);
		}
		temp[i].Avg = -1;
	}
	fclose (fp); 
	*Size = N;
	return temp;
}

void WriteData (struct STUD Foit[], int Size)
{
	FILE* fp;
	
	fp = fopen ("Report.txt", "w");
	if (fp == NULL)
	{
		printf ("Cannot open report file");
		exit (1); 
	}
	int i;
	for (i = 0; i < Size; i++)
	{
		fprintf (fp, "%4d   %-30s   %-30s   %2d   %4.1f   %4.1f   %4.1f   %4.1f   %4.1f   %5.2f\n",
		    Foit[i].AM, Foit[i].Epon, Foit[i].Onom, Foit[i].Semester,
			Foit[i].Grades[0], Foit[i].Grades[1], Foit[i].Grades[2], Foit[i].Grades[3],
			Foit[i].Grades[4], Foit[i].Avg);
	}
}

void SortBySemester (struct STUD Pin[], int S)
{
	int i,j;
	struct STUD tmp;
	
	for (i = 0; i < S - 1; i++)
		for (j = i + 1; j < S; j++)
			if (Pin[i].Semester > Pin[j].Semester)
			{
				tmp = Pin[i]; 
				Pin[i] = Pin[j]; 
				Pin[j] = tmp; 	
			}
}

void SortByEpon (struct STUD Pin[], int S)
{
	int i,j;
	struct STUD tmp;
	
	for (i = 0; i < S - 1; i++)
		for (j = i + 1; j < S; j++)
			if (strcmp (Pin[i].Epon, Pin[j].Epon) > 0)
			{
				tmp = Pin[i]; 
				Pin[i] = Pin[j]; 
				Pin[j] = tmp; 	
			}
}

void CalcAvgs (struct STUD pin[], int S)
{
	int i, j;
	float Sum;
	
	for (i = 0; i < S; i++)
	{
		Sum = 0; 
		for (j = 0; j < 5; j++)
		{
			Sum = Sum + pin[i].Grades[j];
		}
		pin[i].Avg = Sum / 5;
	}
}

void PrintMaxAvg (struct STUD mat[], int N)
{
	int MaxPos;
	float Max;
	int i;
	
	Max = mat[0].Avg;
	MaxPos = 0;
	for (i = 1; i < N; i++)
	{
		if (mat[i].Avg > Max)
		{
			Max = mat[i].Avg;
			MaxPos = i;
		}
	}
	
	printf ("Best Student : %d   %s   %f\n", mat[MaxPos].AM, mat[MaxPos].Epon,
		mat[MaxPos].Avg);
}

int CountPassedCourses (struct STUD f)
{
	int Count = 0;
	int i;
	for (i = 0; i < 5; i++)
		if (f.Grades[i] >= 5.0)
			Count++;
	return Count;
}

void PrintStudsPassed (struct STUD foit[], int S)
{
	int i;
	int C;
	for (i = 0; i < S; i++)
	{
		C = CountPassedCourses (foit[i]);
		printf ("%3d  %-30s   %1d\n", foit[i].AM, foit[i].Epon, C);	
	}
}
	
float CourseMaxGrade (struct STUD foit[], int S, int Co)
{
	int i;
	float Max;
	Max = foit[0].Grades[Co];
	for (i = 1; i < S; i++)
	{
		if (foit[i].Grades[Co] > Max)
			Max = foit[i].Grades[Co];
	}
	return Max;
}

void BestStudsPerCourse (struct STUD foit[], int S)
{
	int i, j;
	float Max;
	
	
	for (i = 0; i < 5; i++)
	{
		Max = CourseMaxGrade (foit, S, i);
		printf ("Course : %d  Max grade : %f\n", i + 1, Max);
		for (j = 0; j < S; j ++)
		{
			if (foit[j].Grades[i] == Max)
				printf ("%3d  %s\n", foit[j].AM, foit[j].Epon);
		}
		printf ("\n");
	}
}
	

