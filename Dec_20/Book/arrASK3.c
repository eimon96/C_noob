#include<stdio.h>

int main()
{
	char arr_char[4][26];
	int i, j, c = 0, pos[4][26];
	
	for (i = 0; i < 4; i++)
	{
		printf("\nDwse string no%d: ", i+1);
		gets(arr_char[i]);
	}
	
	for (i = 0; i < 4; i++)
		for (j = 0; j < 26; j++)
			pos[i][j] = 0;
	
	for (i = 0; i < 4; i++)
	{
		printf("\n");
		puts(arr_char[i]);
		
		int exists = 0;
		for(j = 0; j < 26; j++)
		{
			if (arr_char[i][j] == 'D')
			{
				exists++;
				pos[i][j] = 1;
			}
		}
	//	if (exists % 3 == 0) c += (exists / 3);
		if (exists >= 3) c++;
	}
	printf("\nCounter: %d\n", c);
	printf("\nTheseis: ");
	for (i = 0; i < 4; i++)
		for (j = 0; j < 26; j++)
			if (pos[i][j] == 1 && pos[i][j-1] == 1 && pos[i][j+1] == 1)
				printf("[%d,%d]\t[%d,%d]\t[%d,%d]\t\n", i, j-1, i, j, i, j+1);  //??? duplicates
	
	
	
	
	return 0;
}
