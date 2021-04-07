#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  printf("Starting\n");
  printf("Original process with PID=%d, PPID=%d.\n", getpid(), getppid());
  fork( );
  printf("Level 1 process with PID=%d, PPID=%d.\n", getpid(), getppid());
  fork( );
  printf("Level 2 process with PID=%d, PPID=%d.\n", getpid(), getppid());
  exit(107);
  printf("This will never execute.\n");
}
