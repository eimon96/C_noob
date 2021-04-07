#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{

int pid,pid1,pid2;
int i,num;
int status;

pid1=fork();
if(pid1!=0)
{
pid2=fork();
if(pid2!=0)
{
waitpid(pid1,&status,0);
for (num=11; num<=20; num++) printf("%d\n",num);
}
else
{
printf("I am the second child - do nothing\n");
}
}
else
{
sleep(1);
for (i=1; i<=10; i++) printf("%d\n",i);
}
}
