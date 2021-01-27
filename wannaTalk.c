#include <stdio.h>
#include <string.h>

int greets(char *);
int fine(char *);
void bye(char *);


int main()
{
	
	char ans[500] = "Hello There!";
	char talk[1000] = "";
	int flag = 0;
	
	while (strcmp(talk, "$"))
	{
		puts(ans);
		
		if (flag == 1)
		{
			scanf("%[^\n]%*c", talk);
			sleep(3);
			bye(ans);
			break;
		}
		
		scanf("%[^\n]%*c", talk);
		
		strcpy(ans, "Whatever");
		
		if (greets(talk))
		{
			sleep(1);
			strcpy(ans, "Howdy?");
		}
		if (fine(talk))
		{
			sleep(1);
			strcpy(ans, "Good, or thats what I think at least. \nSo hows life? I wont judge, you can tell me anything.");
			flag = 1;
		}
		
	}
	

	
	return 0;
}

int greets(char *talk)
{
	if (strcmp(talk, "hi") == 0 || strcmp(talk, "hello") == 0 || strcmp(talk, "hi!") == 0 || strcmp(talk, "hello!") == 0 || 
	strcmp(talk, "geiaa") == 0)
		return 1;
	else
		return 0;
}

int fine(char *talk)
{
	if (strcmp(talk, "fine... u?") == 0 || strcmp(talk, "fine u?") == 0 || strcmp(talk, "not good u?") == 0)
		return 1;
	else
		return 0;
}


void bye(char *ans)
{
			strcpy(ans, "\n\nSorry Im interrupting..");	
			puts(ans);
			sleep(1);
			strcpy(ans, "\nbut I really have to go.");	
			puts(ans);
			sleep(1);
			strcpy(ans, "\nFarewell.");	
			puts(ans);
			sleep(1);
}

// trolling in my free time









