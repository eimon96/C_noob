#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()

{

  printf("Starting\n");

  printf("Original process with PID=%d, PPID=%d.\n", getpid(), getppid());

}
