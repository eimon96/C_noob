//#include <stdio.h>
//int main()
//{
//int i;
//char str[4][8], str_total[13];
//for (i=0;i<4;i++)
//{
//printf( "\nGive string no %d: ",i+1 );
//scanf( "%s",str[i] );
//if (i==0) strncat(str_total,str[i],3);
//else strncat(str_total,str[i],3);
//}
//printf( "Total string: %s\n",str_total );
//return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//int i;
//char str[4][8], str_total[13];
//for (i=0;i<4;i++)
//{
//printf( "\nGive string no %d: ",i+1 );
//scanf( "%s",str[i] );
//if (i==0) strncpy(str_total,str[i],3);
//else strncat(str_total,str[i],3);
//}
//printf( "Total string: %s\n",str_total );
//return 0;
//}

#include <stdio.h>
#define SIZE 10
int func(int b[], int p);
int main()
{
int x;
int a[SIZE]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
x=func(a,SIZE);
printf( "The result is %d\n", x );
return 0;
}
int func(int b[], int p)
{
if (p==1) return(b[0]);
else return(b[p-1]+func(b,p-1));
}
