#include <stdio.h>
#include <stdlib.h>

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



int main (int argc, char **argv)
{
	int N;
	struct STUD *AllSt;
	AllSt = ReadData ("Exer1Data.txt", &N);
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
		fprintf (fp, "%4d   %-10s   %-10s   %2d   %4.1f   %4.1f   %4.1f   %4.1f   %4.1f   %5.2f\n",
		    Foit[i].AM, Foit[i].Epon, Foit[i].Onom, Foit[i].Semester,
			Foit[i].Grades[0], Foit[i].Grades[1], Foit[i].Grades[2], Foit[i].Grades[3],
			Foit[i].Grades[4], Foit[i].Avg);
	}
}
	
	
	
	
	
	

