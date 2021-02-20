#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int reading (char [][51], char []);
void printing(char [][51], int);
int isWord(char []);
void printNoWo(char [][51], int);
void maxLen (char [][51], int, int *, int *);
void printMAX (char [][51], int, int, int);
int containing(char [], char);
void printContain(char [][51], int, char);
void freq(char [][51], int);
int isPalindrome(char []);
void karkinikes(char [][51], int);
void iWantOrder(char [][51], int);


int main()
{
	char Words[100][51];
	int lines;
	int maxStr, maxWrd;
	
	//1
	lines = reading(Words, "WordFile_ver2.txt");
	printing(Words, lines);
	
	//2
	printNoWo(Words, lines);
	
	//3
	maxLen(Words, lines, &maxStr, &maxWrd);
	printMAX(Words, lines, maxStr, maxWrd);
	
	//4
	printContain(Words, lines, '7');
	
	//5
	freq(Words, lines);
	
	//6
	karkinikes(Words, lines);
	
	//7
	iWantOrder(Words, lines);
	
	
	printf("\n\n\n");
	system("pause");
	
	return 0;
}


int reading (char Pin[][51], char FN[])
{
	FILE *fp;
	int i = 0;
	char line[51];
	
	fp = fopen(FN, "r");
	
	if(fp == NULL)
	{
		printf("Cannot open file..\n");
		exit(1);
	}
	
	do
	{
		fscanf(fp, "%s", line);
		if (!feof(fp))
		{
			strcpy(Pin[i], line);
			i++;			
		}
	} while (!feof(fp));
	
	fclose(fp);
	return(i);
}


void printing(char Pin[][51], int size)
{
	printf("File: \n\n");
	
	int i;
	for (i = 0; i < size; i++)
		printf("%s \n", Pin[i]);
}


int isWord(char Str[])
{
	int i;
	int len = strlen(Str);
	
	for (i = 0; i < len; i++)
		if (!((Str[i] >= 'A' && Str[i] <= 'Z') || (Str[i] >= 'a' && Str[i] <= 'z')))
			return 0;
	
	return 1;
}


void printNoWo(char Pin[][51], int size)
{
	printf("\n\nNot Words: \n\n");
	
	int i;
	
	for (i = 0; i < size; i++)
		if (!isWord(Pin[i]))
			printf("%s \n", Pin[i]);
	
}


void maxLen (char Pin[][51], int size, int *len1, int *len2)
{
	int i;
	int maxStr, maxWrd;

	maxStr = strlen(Pin[0]);
	maxWrd = 0;
	
	for (i = 0; i < size; i++)
	{
		if (strlen(Pin[i]) > maxStr)
			maxStr = strlen(Pin[i]);
			
		if (isWord(Pin[i]))
			if (strlen(Pin[i]) > maxWrd)
				maxWrd = strlen(Pin[i]);
	}	
	
	*len1 = maxStr;
	*len2 = maxWrd;
}


void printMAX (char Pin[][51], int size, int MS, int MW)
{
	printf("\n\nMax Strings and Max Words: \n\n");
	
	int i;
	for (i = 0; i < size; i++)
	{
		if (strlen(Pin[i]) == MS)
			printf("%s \n", Pin[i]);
	}
	
	printf("\n\n");
	
	for (i = 0; i < size; i++)
	{
		if (strlen(Pin[i]) == MW && isWord(Pin[i]))
			printf("%s \n", Pin[i]);
	}
}


int containing(char Str[], char c)
{
	int i;
	for (i = 0; i < strlen(Str); i++)
		if (Str[i] == c)
			return 1;
	return 0;
}


void printContain(char Pin[][51], int size, char c)
{
	printf("\n\nContaining:\n\n");
	
	int i;
	for (i = 0; i < size; i++)
		if(containing(Pin[i], c))
			printf("%s, contains %c\n", Pin[i], c);
}


void freq(char Pin[][51], int size)
{
	printf("\n\nCapital letter frequency: \n\n");
	
	int Count[26];
	int i, j;
	
	for (i = 0; i < 26; i++)
		Count[i] = 0;
	
	for (i = 0; i < size; i++)
		for (j = 0; j < strlen(Pin[i]); j++)
			if (Pin[i][j] >= 'A' && Pin[i][j] <= 'Z')
			{
				int temp = Pin[i][j] - 'A';
				Count[temp]++;
			}
	
	for (i = 0; i < 26; i++)
		printf("%c = %d \n", 'A' + i, Count[i]);
	
}


int isPalindrome(char Str[])
{
	int i;
	for (i = 0; i < strlen(Str) / 2; i++)
		if (Str[i] != Str[strlen(Str) - i - 1])
			return 0;
	
	return 1;
}


void karkinikes(char Pin[][51], int size)
{
	printf("\n\nKarkinikes:\n\n");
	
	int i;
	for(i = 0; i < size; i++)
		if (isPalindrome(Pin[i]))
			printf("%s", Pin[i]);
}


void iWantOrder(char Pin[][51], int size)
{
	printf("\n\nOrdered:\n\n");
	int i, j;
	char str[100][51], temp[51];
	
	for(i = 0; i < size; i++)
    	strcpy(str[i], Pin[i]);
	
	
	for(i = 0; i < size; i++)
      	for(j = i + 1; j <= size; j++)
         	if(strcmp(str[i], str[j]) > 0)
			{
            	strcpy(temp, str[i]);
            	strcpy(str[i], str[j]);
           		strcpy(str[j], temp);
         	}
   for(i = 0; i < size; i++)
      printf("%s\n", str[i]);
	
}
















