#include<stdio.h>

int main()
{
	int i;
	char *name[3] = {"John", "James", "Jackie"};
	char *tmp;
	
	printf("\nAddresses of pointers:\n");
	
	for (i = 0;i < 3; i++)
		printf("&name[%d]=%d ", i, &name[i]);
	
	printf("\n\nAddresses of first character:\n");
	
	for (i = 0; i < 3; i++)
		printf("&name[%d][0]=%d ", i, name[i]);
	
	printf("\n\nContents of strings:\n");
	
	for (i = 0; i < 3; i++)
		printf("name[%d]=%s ", i, name[i]);
	
	tmp = name[0]; 
	name[0] = name[2];
	name[2] = tmp;
	
	printf("\n\nContents of strings after swapping:\n");
	for (i = 0; i < 3; i++)
		printf("name[%d]=%s ", i, name[i]);
	return 0;
}
