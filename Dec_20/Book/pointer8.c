#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void replace(char *pword, char *poldString, char *pnewString);


int main() 
{
	char word[21], fnd[11], repl[11];
	
	printf("Give a word: "); 
	scanf("%s", word);
	
	printf("\nGive a string to find: "); 
	scanf( "%s", fnd);
	
	printf("Give a string to replace: " ); 
	scanf( "%s", repl);
	
	replace(word, fnd, repl);
	printf("\nThe new word is: %s", word);
	
	return 0;
}


void replace(char *pword, char *poldString, char *pnewString)
{
	int i;
	char *temp;
	
	temp = strstr(pword, poldString);
	if (temp != NULL)
	{
		do
		{
			for (i = 0; i < strlen(poldString); i++) 
				temp[i] = pnewString[i];
			
			temp = temp + strlen(poldString);
			temp = strstr(temp, poldString);
		}while(temp != NULL);
	}
	else
	{
		printf("\n'%s' is not contained in '%s'.\n\nPress any key to finish", poldString, pword);
		getchar();
		abort();
	}
}






