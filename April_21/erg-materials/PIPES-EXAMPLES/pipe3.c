#include <stdio.h>

main()
{
  int ptc[2],ctp[2;
  char newword[5], word[100];

  pipe(ptc);
  pipe(ctp);
  
  if (fork()!=0)
  { close(ptc[0]);
    close(ctp[1]);
    printf("Give a word:");
    scanf("%s", word);
    write(ptc[1],word,strlen(word)+1);
    read(ctp[0],newword,100);
    printf("My dad changed the word to:%s\n", newword);
    close(ctp[0]);
    close(ptc[1]);

  }
  else
  {
    close(ptc[1]);
    close(ctp[0]);
    read(ptc[0],word,100);
    num = strlen(word)+1;
    strncpy(newword,word,5);
    write(ctp[1],newword,6);
    close(ctp[1]);
    close(ptc[0]);
  }
}
