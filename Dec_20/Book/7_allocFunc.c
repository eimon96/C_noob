#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


float **allocate_2(int size1, int size2);
void free_2(float **parr, int size1);




int main()
{
	int i;
	float **ps;
	
	ps = allocate_2(3, 250);	//array 3x250
	
	printf("\nps=%d\t\taddr(ps)=%d\n", ps, &ps );
	printf("ps[0]=%d\t\taddr(ps[0])=%d\n", ps[0], &ps[0]);
	printf("ps[1]=%d\t\taddr(ps[1])=%d\n", ps[1], &ps[1]);
	printf("ps[2]=%d\t\taddr(ps[2])=%d\n", ps[2], &ps[2]);
	
	ps[0][0] = 400; //to check free()
	printf("\n\n(Prior to free) ps[0][0]=%f\n", ps[0][0]);
	
	free_2(ps, 3);
	printf("\n\n(Afterwards) ps[0][0]=%f\n", ps[0][0]);
	
	return 0;
}




float **allocate_2(int size1, int size2)
{
	int i;
	float **parr;
	
	parr = (float **) malloc(size1 * sizeof(float *));
	assert(parr != NULL);
	
	for (i = 0; i < size1; i++)
	{
		parr[i] = (float *) malloc(size2 * sizeof(float));
		assert(parr[i] != NULL);
	}
	
	printf("\n\nparr=%d\t\taddr(parr)=%d\n", parr, &parr);
	printf("parr[0]=%d\t\taddr(parr[0])=%d\n", parr[0], &parr[0]);
	printf("parr[1]=%d\t\taddr(parr[1])=%d\n", parr[1], &parr[1]);
	printf("parr[2]=%d\t\taddr(parr[2])=%d\n", parr[2], &parr[2]);
	
	return(parr);
}




void free_2(float **parr, int size1)
{
	int i;
	for (i = (size1-1); i >= 0; i--) 
		free(parr[i]);
	
	free(parr);
}








