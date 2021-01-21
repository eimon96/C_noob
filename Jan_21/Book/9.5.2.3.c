#include <stdlib.h>
#include <stdio.h>

#define NAME "tape.txt"

void readCharacter(FILE *fp, char *ps, int k);
void saveCharacter(FILE *fp, char *ps, int k);

int main() {
	
	FILE *fp;
	char charVar;
	fp = fopen(NAME, "wb");
	
	do
	{
		charVar = getchar();
		fwrite(&charVar, sizeof(char), 1, fp);
	}while (charVar != '$');
	
	fclose(fp);
	
	fp = fopen(NAME, "rb+");
	
	readCharacter(fp, &charVar, 13);
	printf("\n\nThe 14th character is: %c\n", charVar);
	charVar = '!';
	saveCharacter(fp, &charVar, 13);
	fclose(fp);
	
	return 0;
}

/*-----------------------------------*/
void readCharacter(FILE *fp, char *ps, int k )
{
	fseek(fp, k * sizeof(char), SEEK_SET);
	fread(ps, sizeof(char), 1, fp);
}

/*-----------------------------------*/
void saveCharacter(FILE *fp, char *ps, int k )
{
	fseek(fp, k * sizeof(char), SEEK_SET);
	fwrite(ps, sizeof(char), 1, fp);
}


//when i write
//whatevah
//
//$
//
//I get CHINESE
