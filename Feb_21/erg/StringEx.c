#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char * ExactWord (char[]);
void DelLastEnter (char[]);

int main (int argc, char **argv)


	char Name[21];
	char *NewWord;
	
	printf ("Enter Word : ");
	gets (Name);
	DelLastEnter (Name);
	printf ("*%s*\n",Name);
	printf ("Enter 2nd Word : ");
	fgets (Name, 21, stdin);
	DelLastEnter (Name);
	printf ("*%s*\n",Name);
	
	
	NewWord = ExactWord (Name); 
	
	
	
	
	
	
 
	free (NewWord);
	
	
	return 0;
}

char * ExactWord (char OrigWord[])
{
	char *tmp;
	tmp = (char *) malloc(strlen (OrigWord) + 1);
	strcpy (tmp, OrigWord);
	return tmp;
}

void DelLastEnter (char Word[])
{
	int x;
	x = strlen (Word);
	if (Word[x -1] == '\n')
	   Word[x - 1] = 0;
}

