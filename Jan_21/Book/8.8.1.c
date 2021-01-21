struct structTypeT
{
	int *point1;
	char *point2;
	float var3;
};

int main()
{
	struct structTypeT deikt;
	int x = 10;
	char y;
	
	deikt.point1 = &x;
	deikt.point2 = &y;
	*(deikt.point1) = 13;

	. . . . . .
		
	return 0;
}
