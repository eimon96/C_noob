#include <stdio.h>
#include <windows.h>  

int main()
{
	system("Color 0A");
	
	char key;
	
	home:
		
	printf("\n\t\tWELCOME!");	
	printf("\n\n\t  Press 'P' to play...");
	printf("\n\n\t  Press 'Q' to quit...\n\t\t\t\t");
	key = toupper(getche());
	if (key == 'P') 
	{
		system("cls");
		Questions();
		goto home;
	}
	else if (key == 'Q')
		exit(1);
	else 
	{
		system("cls");
		goto home;
	}
	
	
	return 0;
	
}

void Questions()
{
	int qnum = 4;
	int score = 0;
	
	
	//1
	printf("Q:1/%d\n",qnum);
	printf("\n\n\nWhat is the color of the Black Box in airplane?");
	printf("\n\n A.Black\t\t B.White\n\n C.Orange\t\t D.Red\n\n");
	if (toupper(getch())=='C')
	{
		printf("\n\nCorrect!");
		score++;
	}
	else
		printf("\n\nWrong! Google it xD");
	
	printf("\nPress any key to continue..");
	getch();
	system("cls");
	
	//2
	printf("Q:2/%d\n",qnum);
	printf("\n\n\nThe Earth is approximately how many km away from the Sun?");
	printf("\n\n A.5.1 million\t\t B.150 million\n\n C.51 million\t\t D.15 million\n\n");
	if (toupper(getch())=='B')
	{
		printf("\n\nCorrect!");
		score++;
	}
	else
		printf("\n\nWrong! Google it xD");
	
	printf("\nPress any key to continue..");
	getch();
	system("cls");
	
	//3
	printf("Q:3/%d\n",qnum);
	printf("\n\n\nWhich insect shorted out an early supercomputer and inspired the term \"computer bug\"?");
	printf("\n\n A.Moth\t\t B.Roach\n\n C.Fly\t\t D.Beetle\n\n");
	if (toupper(getch())=='A')
	{
		printf("\n\nCorrect!");
		score++;
	}
	else
		printf("\n\nWrong! Google it xD");
	
	printf("\nPress any key to continue..");
	getch();
	system("cls");
	
	//4
	printf("Q:4/%d\n",qnum);
	printf("\n\n\nWhich scientific unit is named after an Italian nobleman?");
	printf("\n\n A.Pascal\t\t B.Ohm\n\n C.Volt\t\t\t D.Hertz\n\n");
	if (toupper(getch())=='C')
	{
		printf("\n\nCorrect!");
		score++;
	}
	else
		printf("\n\nWrong! Google it xD");
	
	printf("\nPress any key to continue..");
	getch();
	system("cls");
	
	printf("\n\nScore: %d/%d\n\n", score, qnum);
	
	system("pause"); // === printf("\nPress any key to continue..");	getch();
	system("cls");
	
	
}






