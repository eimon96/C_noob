#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct STUD
{
	int AM;
	char Epwn[31];
	char Onom[31];
	int Semester;
	float Grades[5];
	
	float AVG;	
};


struct STUD *readData(char [], int *);
void writeData(struct STUD [], int);
float MesosOros(float [], int);
void anaMathima(struct STUD [], int);
void maxMO(struct STUD [], int);
void perasaNaPwMiaKalhspera(struct STUD [], int);
void sortEpon(struct STUD [], int);

void MOmathimatwn(struct STUD [], int);
void MOperasmenwn(struct STUD [], int);
void syxnothta(struct STUD [], int);


int main()
{
	struct STUD *AllStud;
	int size;
	
	//a
	AllStud = readData("Exer1Data.txt", &size);
	
	//b
	anaMathima(AllStud, size);
	
	printf("\n\n");
	
	
	//c
	maxMO(AllStud, size);
	
	printf("\n\n");
	
	
	//d
	perasaNaPwMiaKalhspera(AllStud, size);
	
	
	//e
	writeData(AllStud, size);
	
	printf("\n\n");
	
	
	
	//extra1
	MOmathimatwn(AllStud, size);
	
	printf("\n\n");
	
	//extra2
	MOperasmenwn(AllStud, size);
	
	printf("\n\n");
	
	//extra3
	syxnothta(AllStud, size);

	
	return 0;
}


struct STUD *readData(char FN[], int *size)
{
	FILE *fp;
	int N;
	struct STUD *Foit;
	
	fp = fopen(FN, "r");
	
	if (fp == NULL)
	{
		printf("Cannot open file...");
		exit(1);
	}
	
	fscanf(fp, "%d", &N);
	Foit = (struct STUD *) malloc(N * sizeof(struct STUD));
	
	
	int i;
	for (i = 0; i < N; i++)
	{
		fscanf(fp, "%d", &Foit[i].AM);
		fscanf(fp, "%s", Foit[i].Epwn);
		fscanf(fp, "%s", Foit[i].Onom);
		fscanf(fp, "%d", &Foit[i].Semester);
		
		int j;
		for(j = 0; j < 5; j++)
			fscanf(fp, "%f", &Foit[i].Grades[j]);
			
		Foit[i].AVG = MesosOros(Foit[i].Grades, 5);
	}
	
	fclose(fp);
	*size = N;
	
	return(Foit);
	
}


void writeData(struct STUD Foit[], int size)
{
	FILE *fp;
	
	fp = fopen("written.txt", "w");
	
	if (fp == NULL)
	{
		printf ("Cannot open file to write.");
		exit (1); 
	}
	
	
	sortEpon(Foit, size);
		
	
	int i;
	for (i = 0; i < size; i++)
	{
		fprintf (fp, "%4d   %-10s   %-10s   %2d   %4.1f   %4.1f   %4.1f   %4.1f   %4.1f	   %5.2f\n",
				Foit[i].AM, Foit[i].Epwn, Foit[i].Onom, Foit[i].Semester, 
				Foit[i].Grades[0], Foit[i].Grades[1], Foit[i].Grades[2], Foit[i].Grades[3], Foit[i].Grades[4],
				Foit[i].AVG); 
	}
	
}


float MesosOros(float Grades[], int size)
{
	int i;
	float MO = 0;
	
	for(i = 0; i < size; i++)
	{
		MO += Grades[i];
	}
	
	MO = MO / size;
	
	return(MO);
}


void anaMathima(struct STUD Foit[], int size)
{
	int i, j;
	for (j = 0; j < 5; j++)
	{
		float maxx = Foit[0].Grades[j];
		
		for (i = 1; i < size; i++)
		{
			if (Foit[i].Grades[j] > maxx)
			{
				maxx = Foit[i].Grades[j];
			}
		}
		
		int k; 
		for (k = 0; k < size; k++)
		{
			if (Foit[k].Grades[j] == maxx)
				printf("%3d mathima -> kaluteros o %3d, %-10s, %-10s me %4.1f\n", j + 1, 
					Foit[k].AM, Foit[k].Epwn, Foit[k].Onom, maxx);
		}
		
	}
	
	
	
}


void maxMO(struct STUD Foit[], int size)
{
	int i;
	float maxx = Foit[0].AVG;
	int flagF = 0;
	
	for (i = 1; i < size; i++)
	{
		if (maxx < Foit[i].AVG)
		{
			maxx = Foit[i].AVG;
			flagF = i;
		}
	}	
	
	printf("Kalutero MO exei o %3d, %-10s, %-10s me %4.1f", Foit[flagF].AM, Foit[flagF].Epwn, Foit[flagF].Onom, maxx);
	
}


void perasaNaPwMiaKalhspera(struct STUD Foit[], int size)
{
	int i, j, counter;
	
	for (i = 0; i < size; i++)
	{
		counter = 0;
		for (j = 0; j < 5; j++)
		{
			if (Foit[i].Grades[j] >= 5.0)
				counter++;
		}
		
		printf("O foithths me AM %3d perase %1d mathimata\n", Foit[i].AM, counter);
	}
	
}


void sortEpon(struct STUD Foit[], int size)
{
	struct STUD temp;
	int i, j;
	
	for (i = 0; i < size - 1; i++)
		for (j = i + 1; j < size; j++)
			if (strcmp(Foit[i].Epwn, Foit[j].Epwn) > 0)
				{
					temp = Foit[i];
					Foit[i] = Foit[j];
					Foit[j] = temp;
				}
}





void MOmathimatwn(struct STUD Foit[], int size)
{
	int i, j;
	float mo;
	
	for (j = 0; j < 5; j++)
	{
		mo = 0.0;
		
		for (i = 0; i < size; i++)
		{
			mo += Foit[i].Grades[j];
		}
		mo /= size;
		printf("%2d mathima - mo: %4.1f\n", j + 1, mo);
	}
}


void MOperasmenwn(struct STUD Foit[], int size)
{
	int i, j, counter;
	float mo;
	
	for (i = 0; i < size; i++)
	{
		mo = 0.0;
		counter = 0;
		
		for (j = 0; j < 5; j++)
			if (Foit[i].Grades[j] > 5.0)
			{
				mo += Foit[i].Grades[j];
				counter++;
			}
		mo /= counter;
		printf("O MO perasmenwn tou foithth me AM: %3d einai %4.1f\n", Foit[i].AM, mo);
	}
}


void syxnothta(struct STUD Foit[], int size)
{
	int i, j, g[11];
	
	for (i = 0; i < 11; i++)
		g[i] = 0;
	
	
	for (i = 0; i < size; i++)
		for (j = 0; j < 5; j++)
		{
			float tmp = Foit[i].Grades[j];
			int t = round(tmp);
			 
			switch(t)
			{
				default: 
					g[t]++;
			}
		}
	
	int maxx = 0;
	for (i = 0; i < 11; i++)
	{
		printf("Vathmos: %2d, Syxnothta: %2d\n", i, g[i]);
		if (g[i] > maxx)
			maxx = g[i];
	}
	
	printf("O vathmos me thn megalhterh syxnothta einai o: %d", maxx);
	// h periptwsh na einai polloi vathmoi me thn idia syxnothta de lhfthike upopsi	
}

















