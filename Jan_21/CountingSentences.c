#include <stdio.h>

int sentences(char ch);
int words(char ch);
void results(int s, int w, int c);



int main()
{
	char ch;
	int s = 0, w = 0, c = 0;
	
	printf("Say sth: \n\n");
	
	while ((ch = getchar()) != '$')
	{
		s += sentences(ch);
		w += words(ch);
		c++;
	}	
	
	results(s, w, c);
	
	return 0;
}



int sentences(char ch)
{
	if (ch == '.' || ch == '?' || ch == '!')
		return 1;
	else
		return 0;
}

int words(char ch)
{
	if (ch == ' ' || ch == ',' || ch == '.' || ch == '?' || ch == '!')
		return 1;
	else 
		return 0;
}

void results(int s, int w, int c)
{
	printf("\nProtaseis: %d", s);
	printf("\nLekseis: %d", w);
	printf("\nChars: %d", c);
	
}
