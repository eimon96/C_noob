#include <stdio.h>

int main()
{
	char ch;
	int whites = 0, digits[10] = {0,0,0,0,0,0,0,0,0,0}, klp = 0;
	
	printf("Say sth: \n\n");
	
	while((ch = getchar()) != '.')
	{
		
		switch(ch)
		{
			case('\n'):
			case('\t'):
			case(' '):
				whites++;
				break;
			case('0'): case('1'): case('2'): case('3'): case('4'):
			case('5'): case('6'): case('7'): case('8'): case('9'):
				digits[ch - '0']++;
				break;
			default:
				klp++;
				break;
		}	
	}
	
	printf("\n\nWhite chars: %d", whites);
	printf("\nLoipoi chars: %d", klp);
	
	int i;
	for (i= 0; i < 10; i++)
	{
		printf("\nDigit %d: %d times", i, digits[i]);
	}
		
	
	
	return 0;
}
