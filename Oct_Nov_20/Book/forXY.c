#include <stdio.h>

int main()
{
	int x,y;
	for (x=0,y=0; x+y<100; x=x+20,y=y+10)
		printf( "x=%d y=%d x+y=%d\n",x,y,x+y );
	
	printf( "\nOut of loop: x=%d y=%d\n",x,y );
	
	return 0;
}
