#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ReadFile (char [][51], char []);
void ShowMatrix (char [][51], int);
int IsWord (char []);
void PrintNotWord (char [][51], int);
int Contains (char [], char);
void PrintWordContains (char [][51], int, char);

int main (int argc, char **argv)
{
	char Words[100][51];
	int N;
	
	N = ReadFile (Words, "WordFile.txt");
	//ShowMatrix (Words, N);
	PrintNotWord (Words, N);
	PrintWordContains (Words, N, '7');
	
	
	return 0;	
}

int ReadFile (char Pin[][51], char Fn[])
{
	FILE *fp;
	char Line[51];
	int CurLin;
	
	fp = fopen (Fn, "r");
	if (fp == NULL)
	{
		printf ("Cannot open file\n");
		exit (1); 
	}
	
	CurLin = 0;
	do
	{
		fscanf (fp, "%s", Line);   // fgets (Line, 51, fp);
		if (!feof (fp))
		{
			strcpy (Pin[CurLin], Line);
			CurLin++;
		}	
	}
	while (!feof (fp));	
	fclose (fp);
	return CurLin;
} 

void ShowMatrix (char Pin[][51], int Size)
{
	int i;
	for (i = 0; i < Size; i++)
		printf ("%s\n", Pin[i]);
}

int IsWord (char Str[])
{
	int i;
	int l;
	
	l = strlen (Str);
	for (i = 0; i < l; i++)
	{
		if (!((Str[i] >= 'A' && Str[i] <= 'Z') || (Str[i] >= 'a' && Str[i] <= 'z')))
			return 0;
	}
	return 1;
}

void PrintNotWord (char Pin[][51], int NoW)
{
	int i;
	for (i = 0; i < NoW; i++)
	{
		if (!IsWord (Pin[i]))
			printf ("%s is NOT word\n", Pin[i]);
	}
}

int Contains (char Str[], char Tbs)
{
	int i;
	int l;
	l = strlen (Str);
	for (i = 0; i < l; i++)
		if (Str[i] == Tbs)
			return 1;
	return 0;
}

void PrintWordContains (char Pin[][51], int NoW, char Tbs)
{
	int i;
	for (i = 0; i < NoW; i++)
	{
		if (Contains (Pin[i], Tbs))
			printf ("%s contains %c\n", Pin[i], Tbs);
	}
}

void PrintWordContains1 (char Pin[][51], int NoW, char Tbs)
{
	int i;
	for (i = 0; i < NoW; i++)
	{
		if (strchr (Pin[i], Tbs) != NULL)
			printf ("%s contains %c\n", Pin[i], Tbs);
	}
}



