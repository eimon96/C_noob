#include <stdio.h>
#include <stdlib.h>

#define M 3
#define N 4

void read_data(float **parr,int m, int n);
void print_data(float **parr,int m, int n);
float max_Row(float *prow, int n);
float min_Row(float *prow, int n);
float mean_Row(float *prow, int n);

int main()
{
  int i,j;
  
  float arr[M][N],minRow,maxRow,meanRow;
  
  read_data(arr,M,N);	
  print_data(arr,M,N);
  
  for (i=0;i<M;i++)
  {
    printf("\n\nThe min value of row %d is %f",i+1,min_Row(&arr[i],N));
    printf("\n\nThe max value of row %d is %f",i+1,max_Row(&arr[i],N));
    printf("\n\nThe mean value of row %d is %f",i+1,mean_Row(&arr[i],N));
  }  
    
return 0;		
}

void read_data(float **parr, int m, int n)
{
	int i,j;
	printf("\n\tEnter elements in %dx%d matrix:\n", m, n);
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)	
		{
		scanf("%f", &parr[i][j]);	
		}
	}
}

void print_data(float **parr,int m, int n)
{
	int i,j;
	printf("\n\tThe %dx%d matrix is:\n", m, n);
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)	
		{
		printf("\t%.3f",parr[i][j]);	
		}
		printf("\n");
	}
}

float min_Row(float *prow, int n)
{
	int j;
	float minVal;
	
	minVal=prow[0];
	for (j=1;j<n;j++)	
	{
	  if (prow[j]<minVal) minVal=prow[j];
	}	
	return minVal;
}


float max_Row(float *prow, int n)
{
	int j;
	float maxVal;
	
	maxVal=prow[0];
	for (j=1;j<n;j++)	
	{
	  if (prow[j]>maxVal) maxVal=prow[j];
	}	
	return maxVal;	
}

float mean_Row(float *prow, int n)
{
	int j;
	float meanVal;
	
	meanVal=0;
	for (j=0;j<n;j++)	meanVal=meanVal+prow[j];
	meanVal=meanVal/n;
	return meanVal;	
}


