#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
  int pid;
  char *cmd[] = { "ls" , "-l", "-i", "..", NULL };
  char *cmdch[] = { "date" , "+%T" , NULL };

  printf("I'm the original process. PID=%d, PPID=%d.\n", getpid(), getppid());
  sleep(2);
  pid=fork();
  
  if ( pid !=0 )
   { 
     printf("I'm the parent.PID=%d, PPID=%d.\n", getpid(), getppid());
     execv("/bin/ls", cmd);
   }
  else
   {
     printf("I'm the child. PID=%d, PPID=%d.\n", getpid(), getppid());
     execvp("date", cmdch);
   }
  printf("PID %d terminates.\n", getpid());
}


