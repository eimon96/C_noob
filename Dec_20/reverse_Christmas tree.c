#include<stdio.h>


int main()
{
  int rows,starNumber,spaceNumber,trunkSize,i;
  int rowsCounter,spacesCounter,starsCounter,trunkCounter, treeSpacesCounter;

  printf("Enter the number of rows for the branches (odd number):  ");  scanf("%d",&rows);
  printf("Enter the size of tree's trunk:  ");  scanf("%d",&trunkSize);
  printf("\n\n\n\t");
  
  
  for (rowsCounter=1; rowsCounter<=rows; rowsCounter++)
  {
    for (i=1; i<=(rows-rowsCounter+1); i++) printf("*");
    for (i=(rows-rowsCounter+2); i<=(rows+rowsCounter); i++) printf(" ");
    for (i=(rows+rowsCounter+1); i<=(2*rows+1); i++) printf("*");
    printf("\n\t");
  }

  for (trunkCounter=1; trunkCounter<=trunkSize; trunkCounter++)
  {
    for (i=1; i<=rows; i++) printf("*");
    printf(" ");
    for (i=(rows+2); i<=(2*rows+1); i++) printf("*");
    printf("\n\t");
  }
  
  

  printf("\n\n\n");
  return 0;
}
