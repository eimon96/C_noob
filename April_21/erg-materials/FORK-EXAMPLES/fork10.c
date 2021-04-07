#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main (int argc, char *argv[])
{
  int pid,status;
  printf("I'm the original process. PID=%d, PPID=%d.\n", getpid(), getppid());
  pid=fork();
  
  if ( pid !=0 )
   { 
     wait(&status);
     printf("I'm the parent.PID=%d, PPID=%d.\n", getpid(), getppid());
     execvp(argv[1], &argv[1]);
   }
  else
   {
     printf("I'm the child. PID=%d, PPID=%d.\n", getpid(), getppid());
     exit(102);
   }
  printf("PID %d terminates.\n", getpid());
}
