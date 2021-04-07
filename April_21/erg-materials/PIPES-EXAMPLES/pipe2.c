#include <stdio.h>

main()
{
  int fd[2],num;
  char char1;

  pipe(fd);
  
  if (fork()==0)
  {
    close(fd[0]);
    printf("Give a number:");
    scanf("%d", &num);
    char1 = (char)num;
    write(fd[1],&char1,1);
    close(fd[1]);
  }
  else
  {
    close(fd[1]);
    read(fd[0],&char1,1);
    num = (int)char1;
    printf("Read number %d \n", num);
    close(fd[0]);
  }
}
