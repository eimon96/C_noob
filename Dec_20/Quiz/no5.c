#include <stdio.h>

#include <string.h>

int main()

{

         char msg1[20] ,msg2[20];

         strcpy( msg1, "Lucky you!" );

         strcpy( msg2, "Lucky me!" );

         printf( "msg1=%s\t\tmsg2=%s\n", msg1,msg2 );

         strncat( msg1,msg2,3 );

         printf( "msg1=%s\n", msg1 );

         strcpy( msg2,"Hello" );

         printf( "msg2=%s\n", msg2 );              

         return 0;

}
