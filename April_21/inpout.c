#include <stdio.h>

int main(int argc, char **argv)
{
	int a[5];
	int i;
	
	printf("Enter five nums:\n");
	
	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);
	
	printf("The five nums are:\n");
	for (i = 0; i < 5; i++)
		printf("%d\n", a[i]);
	
	
	return 0;
}
