#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
  int i,sum,num;
  float mo;
  
    printf("Aplo.c: My PID is %d \n", getpid());
    printf("Aplo.c: My PPID is %d \n", getppid());

  if (argc==2)
  {
    num=atoi(argv[1]);
    sum=0;
    for (i=1;i<=num;i++)
      sum=sum+i;
    mo=sum/num;
    sleep(3);
    printf("The sum is:%d.\n", sum);
    printf("The average is:%10.4f.\n", mo);
   }
   else
    printf("Wrong Number of arguments\n");
}
