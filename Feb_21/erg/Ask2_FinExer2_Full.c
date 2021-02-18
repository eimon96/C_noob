#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ReadFile (char [][51], char []);
void ShowMatrix (char [][51], int);
int IsWord (char []);
void PrintNotWord (char [][51], int);
int Contains (char [], char);
void PrintWordContains (char [][51], int, char);
void MaxStrLen (char [][51], int, int *, int *);
void PrintMaxStrWord (char [][51], int, int, int);
int IsPalindr (char []);
void PrintPalird (char [][51], int);
void PrintFreq (char [][51], int);
void PrintAscii ();

int main (int argc, char **argv)
{
	char Words[100][51];
	int N;
	int MaxS, MaxW;
	
	N = ReadFile (Words, "WordFile.txt");
	//ShowMatrix (Words, N);
	PrintNotWord (Words, N);
	PrintWordContains (Words, N, '7');
	MaxStrLen (Words, N, &MaxS, &MaxW);
	PrintMaxStrWord (Words, N, MaxS, MaxW);
	PrintPalird (Words, N);
	PrintFreq (Words, N);
	PrintAscii ();
	
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

void MaxStrLen (char Pin[][51], int NoS, int *Len1, int *Len2)
{
	int i;
	int MaxStr;
	int MaxWord;
	
	MaxStr = strlen (Pin[0]);
	for (i = 1; i < NoS; i++)
	{
		if (strlen (Pin[i]) > MaxStr)
			MaxStr = strlen (Pin[i]);
	}
	*Len1 = MaxStr;
	
	MaxWord = 0;
	for (i = 0; i < NoS; i++)
	{
		if (IsWord (Pin[i]) && strlen (Pin[i])  > MaxWord)
			MaxWord = strlen (Pin[i]);
	}
	*Len2 = MaxWord;
} 

void PrintMaxStrWord (char Pin[][51], int S, int MS, int MW)
{
	int i;
	printf ("Max Strings\n");
	for (i = 0; i < S; i++)
	{
		if (strlen (Pin[i]) == MS)
			printf ("%s\n", Pin[i]);	
	}
	printf ("Max Word\n");
	for (i = 0; i < S; i++)
	{
		if (strlen (Pin[i]) == MW && IsWord (Pin[i]))
			printf ("%s\n", Pin[i]);	
	}
}

int IsPalindr (char Word[])
{
	int l;
	int i;
	l = strlen (Word);
	for (i = 0; i < l / 2; i++)
	{
		if (Word[i] != Word[l - i - 1])
			return 0;
	}
	return 1;
}

void PrintPalird (char Pin[][51], int S)
{
	int i;
	printf ("Palidromikes Words\n");
	for (i = 0; i < S; i++)
		if (IsWord (Pin[i]) && IsPalindr (Pin[i]))
			printf ("%s\n", Pin[i]);
}

void PrintFreq (char Pin[][51], int S)
{
	int i;
	int j;
	int Count[26];
	int Posis;
	
	for (i = 0; i < 26; i++)
		Count[i] = 0;
		
	for (i = 0; i < S; i++)
	{
		for (j = 0; j < strlen (Pin[i]); j++)
			if (Pin[i][j] >= 'A' && Pin[i][j] <= 'Z')
			{
				Posis = Pin[i][j] - 'A';
				Count[Posis] ++;
			}	
	}
	
	for (i = 0; i < 26; i++)
		printf ("%c   %d\n", 'A' + i, Count[i]);
}

void PrintAscii ()
{
	int i;
	for (i = 32; i <= 127; i++)
		printf ("%d   %c\n",i, i);
		
		
}
