#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/file.h>

main()
{
  int fd;
  char str[100];

  unlink("aPipe");
  mknod("aPipe", S_IFIFO, 0);
  chmod("aPipe", 0660);
  
  fd=open("aPipe", O_RDONLY);

  while (readLine(fd,str))
   printf("%s\n", str);

  close(fd);
}

readLine (fd,str)

int fd;
char* str;

{
  int n;
  do
   {
    n=read(fd,str,1);
   }
  while (n>0 && *str++ != NULL);

  return (n > 0);
}
