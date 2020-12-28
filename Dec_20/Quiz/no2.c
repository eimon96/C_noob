#include <stdio.h>

int main()

{

         int x,y;

         for (x=0,y=0; x+y<100; x=x+20,y=y+10)    printf( "x=%d\ty=%d\t\n",x,y);

         printf( "x=%d\ty=%d ",x,y );             

         return 0;

}
