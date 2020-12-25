/*��������� ��������� ������� �� �������.
(i) ������������� ����� �������� ��� ������.
(ii) ������� �� ��� �������, ���� ������������� �������� ����� �����������
������� ��� ���������� ��� �������.
��� �� ����� ������ � �������� ��� � ��������, �� ������ K=M ��� L=N.
��� �� ����� ������� � ��������������, �� ������ L=M. */

#include <stdio.h>
#include <stdlib.h>
#define K 6
#define L 3
#define M 6
#define N 3
#define ADD 1
#define SUB 2
#define MUL 3

int main()
{
  int i,j,k;
  float A[K][L],B[M][N],counter;
/*------------------------------------------------*/
/* �������� ��� ���������: ����� ��������, �� ��������
   ��� ��������������� ���� �������� ��� ���� ���������. */
  for (i=0;i<K;i++)
  {
    for (j=0;j<L;j++)
    {
      A[i][j]=2.0*(i+2)*(j+4)/((i+1)*(i+1));
    } // end of j loop        
  }
  
  for (i=0;i<M;i++)
  {
    for (j=0;j<N;j++)
    {
      B[i][j]=4.0*(i+2)*(j+1)/((i+1)*(i+1));
    } // end of j loop        
  }   // end of i loop      
/*------------------------------------------------*/
/* �������� ��� ��������� */
  printf("\n\n\nArray A:\n\t");         
  for (i=0;i<K;i++)
  {
    for (j=0;j<L;j++)
    {
      printf("%.3f\t",A[i][j]);
    }
    printf("\n\t");        
  }             
           
  printf("\n\n\nArray B:\n\t");         
  for (i=0;i<M;i++)
  {
    for (j=0;j<N;j++)
    {
      printf("%.3f\t",B[i][j]);
    }
    printf("\n\t");        
  }             
/*------------------------*/
int choice;
do
{
  printf( "\n Select one of the following:" );
  printf( "\n\t\t\t %d -> + (addition)\n",ADD);
  printf( "\n\t\t\t %d -> - (subtraction)\n",SUB);
  printf( "\n\t\t\t %d -> * (multiplication)\n",MUL);
  scanf( "%d",&choice );
} while ((choice!=1) && (choice!=2) && (choice!=3));         
switch(choice){
    case ADD:
      if ((K==M) && (L==N))
      {
         printf("\n\n\nArray A+B:\n\t");         
         for (i=0;i<M;i++)
         {
           for (j=0;j<N;j++)
           {
             printf("%.3f\t",A[i][j]+B[i][j]);
           }
           printf("\n\t");        
         }
      }
      else
        printf("\n\n\tERROR!! Arrays' dimensions are inconsistent!\n");  
      break;
    case SUB:
      if ((K==M) && (L==N))
      {
         printf("\n\n\nArray A-B:\n\t");         
         for (i=0;i<M;i++)
         {
           for (j=0;j<N;j++)
           {
             printf("%.3f\t",A[i][j]-B[i][j]);
           }
           printf("\n\t");        
         }
      }
      else
        printf("\n\n\tERROR!! Arrays' dimensions are inconsistent!\n");  
      break;
    default:
      if (L==M)
      {
         printf("\n\n\nArray AxB:\n  ");         
         for (i=0;i<K;i++)
         {
           for (j=0;j<N;j++)
           {
             counter=0.0;
             for (k=0;k<L;k++) counter=counter+(A[i][k]*B[k][j]);  
             printf("%8.3f  ",counter);
           }
           printf("\n  ");        
         }
      }
      else
        printf("\n\n\tERROR!! Arrays' dimensions are inconsistent!\n");  
      break;
  }   // ����� ��� switch
      
  return 0;
}
