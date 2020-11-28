#include <stdio.h>


int main()
{
	char ch,next_ch;
	
	printf("Write a character:\t");
	scanf("%c", &ch);
	
	printf("The ASCII code of character \'%c\' is %d\n", ch, ch);
	
	next_ch = ch + 1;
	printf("The ASCII code of character %c is %d\n", next_ch, next_ch);
	
	return 0;
	
}

