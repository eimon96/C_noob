#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ReadExample ();
void WriteExample ();
void ReadLineByLine ();
void CutEnter (char []);

int main (int argc, char **argv)
{
	//ReadExample ();
	//WriteExample ();
	//OpenOrCreate ("C:\\Users\\Giorgos Meletiou\\Documents\\CSources\\AAAAA.txt");
	ReadLineByLine ();
	
	
	return 0;
}

void ReadExample ()
{
	FILE *fp;
	int i;
	float x,y;
	float k,l;
	
	fp = fopen ("C:\\Users\\Giorgos Meletiou\\Documents\\CSources\\TbR1.txt", "r");
	if (fp == NULL)
	{
		printf ("Could not open file\n");
		exit (1); 
	}
	fscanf (fp, "%d", &i);
	fscanf (fp, "%f", &x);
	fscanf (fp, "%f", &y);
	printf ("i = %d    x = %f   y = %f\n", i, x, y);
	
	fclose (fp);
}

void WriteExample ()
{
	FILE *fp;
	int i;
	float x;
	char name[21];
	
	fp = fopen ("C:\\Users\\Giorgos Meletiou\\Documents\\CSources\\TbW1.txt", "w");
	if (fp == NULL)
	{
		printf ("Could not create file\n");
		exit (1); 
	}

	printf ("Enter integer :");
	scanf ("%d", &i);
	fprintf (fp, "%d\n", i);
	printf ("Enter float   :");
	scanf ("%f", &x);
	fprintf (fp, "%f\n", x);
	printf ("Enter word    :");
	scanf ("%s", name);
	fprintf (fp, "%s\n", name);
	fflush (fp); 
	system ("pause");
	fclose (fp);
}

void OpenOrCreate (char Fn[])
{
	FILE *fp;
	
	fp = fopen (Fn, "r+");
	if (fp == NULL)
	{
		printf ("Does not exixts. I will create it now...");
		fp = fopen (Fn, "w+");
	}
	else
	{
		printf ("File exists...\n");
	}
	
	//...........
	
	fclose (fp); 
}

void ReadLineByLine ()
{
	FILE *fp;
	char Buffer[101];
		
	fp = fopen ("C:\\Users\\Giorgos Meletiou\\Documents\\CSources\\Lines.txt", "r");
	
	while (! feof (fp))
	{
		fgets (Buffer, 101, fp);
		if (!feof (fp))
		{
			CutEnter (Buffer); 
			printf ("*%s*\n",Buffer);
		}
	}
	
	fclose (fp);
	
}

void CutEnter (char Line[])
{
	if (Line[strlen (Line) - 1] == '\n')
		Line[strlen (Line) - 1] = '\0';
}
