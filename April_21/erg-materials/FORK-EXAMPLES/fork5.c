#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
  int i,num;
  int status;
   if ( fork( )!=0 ) 
   { 
     wait(&status);
     printf("I'm the parent.PID=%d, PPID=%d.\n", getpid(), getppid());
     exit(18);
   }
  else 
   {
     num=0;
     for (i=1;i<=10000;i++)
       num=num+i;
     printf("Num is:%d\n",num);
     printf("I'm the child. PID=%d, PPID=%d.\n", getpid(), getppid());
     exit(20);
   }
}
