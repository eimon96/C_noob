#include <stdlib.h>
#include <stdio.h>

int mylength(char s[]);

int main()
{
  char mit[]="mitsos";
  printf("String length (%s) = %d\n\n\n",mit,mylength(mit));

  return 0;
}


int mylength(char s[])
{
 char *p=s;
 while ((*s)!='\0')  s++;
 printf("s=%d  p=%d\n\n\n",s,p);
 return(s-p);
}

