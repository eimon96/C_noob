#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct vectT
{
	float x, y;
};

void readData(struct vectT *parr, int n);
void stats(struct vectT *parr, int n);


int main()
{
	struct vectT *arr;
	int n;
	
	printf("n: ");
	scanf("%d", &n);
	
	arr = (struct vectT *) malloc(n * sizeof(struct vectT));  //????????????
	assert(arr != NULL);
	
	readData(&arr, n);
	
	stats(&arr, n);
	
	free(arr); //????????????
	
	return 0;
}


void readData(struct vectT *parr, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{	
		printf("\n\nNew Vector:\n\n");
		printf("\nx: ");
		scanf("%f", &parr[i].x);
		printf("\ny: ");
		scanf("%f", &parr[i].y);
	}
}


void stats(struct vectT *parr, int n)
{
	int i;
	
	float max = parr[0].x;
	float min = parr[0].x;
	float sum = parr[0].x;
	
	for (i = 1; i < n; i++)
	{
		if (parr[i].x > parr[i + 1].x)
			max =  parr[i].x;
		if (parr[i].x < parr[i + 1].x)
			min =  parr[i].x;
			
		sum += parr[i].x;
	}
	
	sum += parr[n].x;
	
	printf("\nMax x: %f", max);
	printf("\nMin x: %f", min);	
	printf("\nMO x: %f", sum / n);
}








