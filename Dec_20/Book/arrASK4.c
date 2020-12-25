#include<stdio.h>
#include<string.h>

int main()
{
	char str[3][21];
	int i = 0;
	
	do
	{
		printf("Dwse string no %d: ", i+1);
		gets(str[i]);
		i++;
	} while (i < 3);
	
	for (i = 0; i < 4; i++)
	{	printf("\n");
		puts(str[i]);
	}
	
	if (strlen(str[0]) >= 3 && strlen(str[1]) >= 3)
		if (strncmp(str[0], str[1], 3) == 0)
			strncpy(str[2], str[0], 3);
			
	for (i = 0; i < 4; i++)
	{	printf("\n");
		puts(str[i]);
	}
		
	
	return 0;
}
