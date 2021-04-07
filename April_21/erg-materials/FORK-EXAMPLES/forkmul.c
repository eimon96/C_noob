#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>

int main() 
{
int pids[10];
int i;
int n = 10;

for (i = 0; i < n; ++i) 
  pids[i] = -1;

for (i = 0; i < n; ++i) {
  pids[i] = fork();
  if (pids[i] == 0) {
    printf("I am the child #%d - pids[%d]=%d, pids[%d]=%d, pids[%d]=%d\n", i, i, pids[i], i-1, pids[i-1], i+1, pids[i+1]);
    exit(0);
  }
}
sleep(1);
printf("I am the parent - finished!!!\n");
}
