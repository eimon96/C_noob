#include <stdio.h>


int main()
{
	char kati;
	char *kati_ptr;
	
	kati_ptr = &kati;
	
	//////////////////
	
	int numArray[3] = {1, 2, 3};
	int *num_ptr;
	
	num_ptr = numArray;
	
	//////////////////
	
	int *pcount, num;
	num = 10;
	pcount = &num;
	*pcount = 20;
	
	//////////////////
	
	
	return 0;
}
