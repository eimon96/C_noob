//a

//#include <stdio.h>
//int func(int *i)
//{
//static int j=1;
//j=j+(*i);
//return((*i)+j);
//}
//int main()
//{
//int n;
//for (n=0;n<8;n=n+3)
//printf( "%d\n",func(&n) );
//return 0;
//}

//b
#include <stdio.h>
#include <string.h>
char *func(char *i)
{
return(i+1);
}
int main()
{
char *fnd,n[10]="Fourteen";
fnd=func(&n[2]);
printf( "%s",fnd );
return 0;
}
