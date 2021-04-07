#include <stdio.h>

char *phrase = "My child sent me this!!";

main()
{
  int fd[2], bytesread;
  char message[100];

  pipe(fd);
  
  if (fork()==0)
  {
    close(fd[0]);
    write (fd[1],phrase,strlen(phrase)+1);
    close(fd[1]);
  }
  else
  {
    close(fd[1]);
    bytesread=read(fd[0],message,100);
    printf("Read %d bytes:%s\n", bytesread, message);
    close(fd[0]);
  }
}
