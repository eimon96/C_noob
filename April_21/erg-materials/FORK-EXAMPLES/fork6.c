#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()

{
int pid,pid1,pid2;
int i,num;
int status1;
int status2;

pid1=fork();
if(pid1!=0)
{
wait(&status1);
for (num=21; num<=30; num++) printf("%d\n",num);
}
else
{
pid2=fork();
if(pid2!=0)
{
wait(&status2);
for (num=11; num<=20; num++) printf("%d\n",num);
}
else
{
for (i=1; i<=10; i++) printf("%d\n",i);
}
}
}
