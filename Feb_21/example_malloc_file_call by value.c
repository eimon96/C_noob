#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int endofsentence(char ch);
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
    s=s+endofsentence(ch);
    c++;
  }

  displayresults(s,c);

  fclose(f1);

  return 0;
}

int endofsentence(char localCharacter)
{
  if ((localCharacter=='.') || (localCharacter==';') || (localCharacter=='!')) return(1);
  else return(0);
}

void displayresults(int s, int c)
{
  printf("\n\nNumber of sentences:%d\nNumber of characters:%d",s,c );
}
