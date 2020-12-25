#include <stdio.h> 
#include <time.h>    /* for rand */
#include <unistd.h>  /* for usleep */ 
  
#define RefreshRate 800000  //400000  //40000 
#define randomness 5 /* high means less random in the position of tree ornaments */
/*-----------------------------------------------------*/
/* Function declaration */
void printRandomLeaf();
void triangle(int f, int n, int th);
void printBranches(int h);
void printTrunk(int n);  
/*-----------------------------------------------------*/  
int main() 
{ 
  int i=1;
  srand(time(NULL)); 
  int height = 16; 
  
  printf("\n*********MERRY CHRISTMAS*********\n\n"); 
  printf("\nPress any key to continue\n\n"); 
  getch();
  
  
  while (i==1)  /* Refresh loop */
  { 
    system("cls");        /* Clear the screen. In LINUX it's system("clear") */
    printf("\nPress CTRL+C to finish\n\n"); 
    printBranches(height);    /* Print the branches */
    printTrunk(height);   /* Print the trunk */
    usleep(RefreshRate);  /* Delay for RefreshRate (in microseconds) */
  } 
  
  return 0; 
} 
/*-----------------------------------------------------*/
/*  Prints multiple triangles */

void printBranches(int h) 
{ 
  int start=1,stop=0,diff=3; 
  while (stop<h+1)
  { 
    stop=start+diff; 
    triangle(start,stop,h); 
    diff++; 
    start=stop-2; 
  } 
} 
/*-----------------------------------------------------*/
/* Print a random character, giving preference to '*' */ 

void printRandomLeaf() 
{ 
  char leaftypes[5] = {'.','*','+','o','O' }; /* Types of ornament */
  int temp=rand()%randomness; 
  
  /* Giving preference to '*' */
  if (temp==1)  printf("%c ",leaftypes[rand()%5]); 
  else  printf("%c ", leaftypes[1]); 
} 
/*-----------------------------------------------------*/
void triangle(int f, int n, int th) 
{ 
    int i,j,k=2*th-2; 
  
    for (i =0;i<(f-1);i++)  k--; 
  
    /* number of rows */
    for (i=f-1;i<n;i++)
	{ 
      /* space handler */
      for (j=0; j<k;j++)  printf(" "); 
      /* decrementing k after each loop */
      k=k-1; 
      /* number of columns, printing stars */
      for (j=0;j<=i;j++) printRandomLeaf(); 
        printf("\n"); 
    } 
} 
/*-----------------------------------------------------*/
/* Print the trunk */ 

void printTrunk(int n) 
{ 
  int i,j,k=2*n-4; 
  
  for (i=1;i<=6;i++)
  { 
    /* space handler */
    for (j=0;j<k;j++)  printf(" "); 
    for (j=1;j<=6;j++)  printf("#"); 
    printf("\n"); 
  } 
} 

