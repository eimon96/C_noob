#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  int num;
  printf("I'm the original process. PID=%d, PPID=%d.\n", getpid(), getppid());

  num=fork();
  
  if ( num !=0 )
   { 
     printf("I'm the parent.PID=%d, PPID=%d.\n", getpid(), getppid());
     printf("I have a child with PID %d.\n", num);
   }
  else 
   {
     printf("I'm the child. PID=%d, PPID=%d.\n", getpid(), getppid());
   }
  printf("PID %d terminates.\n", getpid());  
}
