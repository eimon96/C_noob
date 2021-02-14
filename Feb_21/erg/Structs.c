#include <stdio.h>

struct STUD
{
	int AM;
	char Name[51];
	int Semester;
	float Grade[3];	
};

void ReadStud (struct STUD *);
void PrintStud (struct STUD);

int main (int argc, char **argv)
{
	//struct STUD S1, S2;	
	//ReadStud (&S1);
	//PrintStud (S1);
	
	struct STUD Students[10];
	int N;
	int i;
	
	//struct STUD *p;
	
	
	do
	{
		printf ("Enter Number of Students : ");
		scanf ("%d", &N);
	}
	while (N < 1 || N > 10);
	
	//p = (struct STUD *) malloc (N * sizeof (struct STUD));
	
	for (i = 0; i < N; i++)
	{
		printf ("Student %d\n", i + 1);
		ReadStud (&Students[i]);
	}
	
	for (i = 0; i < N; i++)
	{
		PrintStud (Students[i]);
	}

	//free (p); 
	
	
	
	
	
	
	return 0;
}

void ReadStud (struct STUD *F)
{
	int i;
	printf ("Enter AM...............: ");
	scanf ("%d", &F->AM);   
	printf ("Enter Name.............: ");
	scanf ("%s", F->Name);
	printf ("Enter Semester.........: ");
	scanf ("%d", &F->Semester);
	for (i = 0; i < 3; i++)
	{
		printf ("Enter Grade course %d : ", i + 1);
		scanf ("%f", &F->Grade[i]);
	}
	
}

void PrintStud (struct STUD Foit)
{
	int i;
	printf ("      Student Data    \n");
	printf ("-----------------------\n");
	printf ("AM.....................: %d\n", Foit.AM);
	printf ("Name...................: %s\n", Foit.Name);
	printf ("Semester...............: %d\n", Foit.Semester);
	for (i = 0; i < 3; i++)
	{
		printf ("Grade course %d : %f\n", i + 1, Foit.Grade[i]);
	}
	printf ("=====================================\n");	
}
