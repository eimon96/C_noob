#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
  int pid;
  printf("I'm the original process. PID=%d, PPID=%d.\n", getpid(), getppid());
  pid=fork();
  if ( pid !=0 )
   { 
     printf("I'm the parent.PID=%d, PPID=%d.\n", getpid(), getppid());
     execl("../fork/aplo","aplo", "5", NULL);
   }
  else
   {
     printf("I'm the child. PID=%d, PPID=%d.\n", getpid(), getppid());
     execlp("cat","cat","-n","fork1.c", NULL);
   }
  printf("PID %d terminates.\n", getpid());
} 
