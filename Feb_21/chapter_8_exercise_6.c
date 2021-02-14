#include <stdio.h>
#include <stdlib.h>

struct vectT
{
	float x,y;
};


void readData(struct vectT *parr, int n);
void stats(struct vectT *parr, int n);


int main()
{
  	struct vectT *arr;
  	int n;
  	
  	arr=(struct vectT *)malloc(n*sizeof(vectT));
  	printf("\tGive the array's size: ");
  	scanf("%d",&n);
  	
  	readData(arr,n);
  	stats(arr,n);
  	
  	free(arr);
  	return(0);
}

void readData(struct vectT *parr, int n)
{
  int i;	
  for (i=0;i<n;i++)
  {
    	printf("\n\tAssign a value for member x of arr[%d]=  ",i);
    	scanf("%f",&parr[i].x);
    	printf("\n\tAssign a value for member y of arr[%d]=  ",i);
    	scanf("%f",&parr[i].y);
  }
}

void stats(struct vectT *parr, int n)
{
  int i;	
  float minim,maxim,aveg=0.0;
  minim=parr[0].x;
  maxim=parr[0].x;
  aveg=parr[0].x;
  for (i=1;i<n;i++)
  {
    	aveg=aveg+parr[i].x;
    	if (parr[i].x<minim) minim=parr[i].x;
    	if (parr[i].x>maxim) maxim=parr[i].x;
  }
  aveg=aveg/n;
  
  printf("\n\n\tMinimum value of the member x:%f",minim);
  printf("\n\n\tMaximum value of the member x:%f",maxim);
  printf("\n\n\tMean value of the member x:%.2f\n\n",aveg);
}
