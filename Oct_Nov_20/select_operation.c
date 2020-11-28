#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MY_ZERO 1E-5
#define ADD 1
#define SUB 2
#define MUL 3
#define DIV 4

int main( )
{
  float num1,num2,result;
  int choice,flag=0;
  printf( "\nGive first number:"); scanf("%f",&num1 );
  printf( "\nGive second number:"); scanf("%f",&num2 );
  printf( "\n Select one of the following:" );
  printf( "\n\t\t\t %d -> + (addition)\n",ADD );
  printf( "\n\t\t\t %d -> - (subtraction)\n",SUB );
  printf( "\n\t\t\t %d -> * (multiplication)\n",MUL );
  printf( "\n\t\t\t %d -> / (division)\n",DIV );
  scanf( "%d",&choice );
  
  
  switch(choice)
  {
    case ADD:
      result=num1+num2;
      break;
    case SUB:
      result=num1-num2;
      break;
    case MUL:
      result=num1*num2;
      break;
    case DIV:
      if (fabs(num2)>MY_ZERO) result=num1/num2;  // num2 != 0
      else
	  {
	    printf( "\n\t\t ERROR: division by 0" );
		flag=1;
	  }
      break;
    default:
    {
	  printf( "\n\t\tThis selection is not supported" );
	  flag=1;
	}
      break;
  }   // end of switch
  if (flag==0) printf( "\n\n\tResult: %f\n",result );
  
  
  printf("\n\n\n");
  return 0;
}
