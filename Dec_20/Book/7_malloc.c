#include <stdio.h>
#include <stdlib.h>	//malloc, calloc, free
#include <assert.h>

int main()
{
	//////////
	int *ptr;
	ptr = (int *)malloc(20 * sizeof(int));
	
	
	
	
	/////////
	char *msg_ptr;
	msg_ptr = (char *)malloc(20 * sizeof(char));
	
	
	if (msg_ptr == NULL)
	{
		printf("Insufficient memory. Exiting...");
		return(-1);
	}
	
	
	
	
	//////////
	char *pmsg;
	pmsg = (char *) malloc(20 * sizeof(char));
	
	assert(pmsg != NULL);	//idio ousiastika me panw
	
	
	
	
	//////////
	char *str = NULL;
	str = (char *) calloc(10, sizeof(char));




	/////////
	int *pstart;
	pstart = (int *) malloc(20 * sizeof(int));
	free(pstart);



	
	//////////
	char *p1, *p2, letter;
	p1 = (char *) malloc(20 * sizeof(char));
	
	p2 = p1;
	p1 = &letter;
	free(p2);
	
	
	
	
	//////////
	int *psta, size = 3;
	psta = (int *) malloc(size * sizeof(int));
	*psta = 15;
	*(psta + 1) = 28;
	*(psta + 2) = *(psta + 1) + 12;
	free(psta);
	



	return 0;
}












