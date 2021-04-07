#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
int pid,pid1,pid2;
int i,k,num;
int status;

k=1;
printf("global k = %d\n", k);

if (fork()!=0)
{
k=20;
printf("parent 1 k = %d\n", k);
wait(&status);
printf("parent 2 k = %d\n", k);
}
else
{
sleep(2);
printf("child 1 k = %d\n", k);
k = 50;   
printf("child 2 k = %d\n", k);
}
}
