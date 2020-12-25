#include<stdio.h>
#include<string.h>

int str_index(char *s, char *t);


int main()
{
	char str1[20], str2[20];
	
	printf("Dwse 2 strings me enter: \n");
	scanf("%s", str1);
	scanf("%s", str2);
	
	if (str_index(&str1, &str2))
		printf("\n\nThesh: %d", str_index(&str1, &str2));
	else
		printf("\n\nNot found.");
		
		
	return 0;
}


int str_index(char *s, char *t)
{
		char *ptr; 
		int pos;
		
		ptr = strstr(s, t);
		
		if (ptr)
		{
			int i;
			for (i = 0; i <= strlen(s); i++)
				if (s[i] == *ptr)
				{
					pos = i + 1;
					break;
				}
				return(pos);
		}else
			return(0);
}

// to paron programma deixnei thn aristeroterh thesh




