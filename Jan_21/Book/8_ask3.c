#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct domi
{
	char x[40], y[40];
};

struct domi func(char *mptr);

int main()
{
	struct domi d1, d2 = {"One", "Two"};
	char in[40];
	
	strcpy(in, d2.y);
	
	d1 = func(in);
	printf("\n\td1.x=%s\n\n", d1.y); // .x h .y ?!
	
	d1 = func(d2.x);
	printf("\n\td1.y=%s\n\n", d1.y);
	
	return 0;
}

struct domi func(char *mptr)
{
	struct domi c1 = {"Three", "Four"};
	static char w[40] = "Start";
	
	strcat(w, mptr);
	strcpy(c1.y, w);
	
	return (c1);
}

// c1 = three, starttwo - three, starttwoone
