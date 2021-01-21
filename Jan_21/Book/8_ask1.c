#include <stdio.h>

struct card
{
	char *x, *y;
};

int main()
{
	struct card aCard, *pcard;
	
	aCard.x = "Athens";
	aCard.y = "Thessaloniki";
	
	pcard = &aCard;
	
	printf("%s%s%s\n", pcard -> x, " to ", pcard -> y);
	printf("%s%s%s\n", (*pcard).x, " to ", (*pcard).y);

	return 0;
}
