#include<stdio.h>


int main()
{
  int rows,starNumber,spaceNumber,trunkSize;
  int rowsCounter,spacesCounter,starsCounter,trunkCounter, treeSpacesCounter;

  printf("Enter the number of rows for the branches:  ");  scanf("%d",&rows);
  printf("Enter the size of tree's trunk:  ");  scanf("%d",&trunkSize);
  printf("\n\n\n");
  
  for (rowsCounter=1; rowsCounter<=rows; rowsCounter++)
  {
    starNumber=rowsCounter*2-1;
    spaceNumber=rowsCounter+rows-starNumber;
    for (spacesCounter=0; spacesCounter<spaceNumber; spacesCounter++)  printf(" ");
    for (starsCounter=0; starsCounter<starNumber; starsCounter++)  printf("%c",'*');
    printf("\n");
  }

  for (trunkCounter=0; trunkCounter<trunkSize; trunkCounter++)
  {
    for (treeSpacesCounter=0; treeSpacesCounter<(rows*2+1)/2; treeSpacesCounter++)
    printf(" ");
    printf("%c\n",'*');
  }

  printf("\n\n\n");
  return 0;
}
