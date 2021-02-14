#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void endofsentence(int *sentenceCounter, char localCharacter);
        
//int endofsentence(char ch);
void displayresults(int s, int c);


int main()
{
  FILE *f1;
  int s=0,c=0;
  char ch;

  f1=fopen("mitsos.dat","r");  assert(f1!=NULL);

  while ((ch=getc(f1))!=EOF)
  {
    putchar(ch);
    endofsentence(&s, ch);
	//s=s+endofsentence(ch);
    c++;
  }

  displayresults(s,c);

  fclose(f1);

  return 0;
}

//int endofsentence(char localCharacter)

void endofsentence(int *sentenceCounter, char localCharacter)
{
  //if ((localCharacter=='.') || (localCharacter==';') || (localCharacter=='!')) return(1);
  //else return(0);
  if ((localCharacter=='.') || (localCharacter==';') || (localCharacter=='!')) *sentenceCounter=*sentenceCounter+1;
}


void displayresults(int s, int c)
{
  printf("\n\nNumber of sentences:%d\nNumber of characters:%d",s,c );
}
