#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int p1, p2, p3, p4, p5;

	p1 = fork();
	if (p1 == 0) //p1
		printf("I am P1 with PID = %d, and PPID = %d \n\n", getpid(), getppid());
	else //p0
	{
		printf("I am P0 with PID = %d, and PPID = %d \n\n", getpid(), getppid());

		p2 = fork();
		if (p2 == 0) //p2
		{
			printf("I am P2 with PID = %d, and PPID = %d \n\n", getpid(), getppid());
			p3 = fork();
			if (p3 == 0) //p3
				printf("I am P3 with PID = %d, and PPID = %d \n\n", getpid(), getppid());
			else //p2
			{
				p4 = fork();
				if (p4 == 0) //p4
					printf("I am P4 with PID = %d, and PPID = %d \n\n", getpid(), getppid());
				else //p2
				{
					p5 = fork();
					if (p5 == 0) //p5
						printf("I am P5 with PID = %d, and PPID = %d \n\n", getpid(), getppid());
				}
			}
		}
		else //p0
			sleep(3);
	}

	return 0;

}
