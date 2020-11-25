#include <stdio.h>
#include <windows.h>  
#include <stdlib.h>

// Dev C++ 5.11 GCC 4.9.2

int main()
{
	system("Color 0A");
	char key;
	
	printf("Roll the dice?(y/n): ");
	key = getchar();
	
	while (key == 'y')
	{
		srand(time(NULL));
		int rr = rand() % 6 + 1;
		
		switch(rr)
		{
			case(1):
				one();
				break;
			case(2):
				two();
				break;
			case(3):
				three();
				break;
			case(4):
				four();
				break;
			case(5):
				five();
				break;
			case(6):
				six();
				break;
		}
		
		printf("Roll the dice again?(y/n): ");
		key = getchar();
		key = getchar();
	
	}
	
	printf("\nThank you for playing!\n");
	system("pause");
	return 0;
}


void one()
{
	printf("\n*************\
			\n*           *\
		    \n*           *\
			\n*     *     *\
			\n*           *\
			\n*           *\
			\n*************\n\n");
}

void two()
{
	printf("\n*************\
			\n*           *\
		    \n*  *        *\
			\n*           *\
			\n*        *  *\
			\n*           *\
			\n*************\n\n");
}

void three()
{
	printf("\n*************\
			\n*           *\
		    \n*  *        *\
			\n*     *     *\
			\n*        *  *\
			\n*           *\
			\n*************\n\n");
}

void four()
{
	printf("\n*************\
			\n*           *\
		    \n*  *     *  *\
			\n*           *\
			\n*  *     *  *\
			\n*           *\
			\n*************\n\n");
}

void five()
{
	printf("\n*************\
			\n*           *\
		    \n*  *     *  *\
			\n*     *     *\
			\n*  *     *  *\
			\n*           *\
			\n*************\n\n");
}

void six()
{
	printf("\n*************\
			\n*           *\
		    \n*  *     *  *\
			\n*  *     *  *\
			\n*  *     *  *\
			\n*           *\
			\n*************\n\n");
}



