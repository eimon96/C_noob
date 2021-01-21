----------------------*/
*/
/* (a)	Two strings of maximum size 12 are read.                                        */
/* (b)	It is checked whether the last 4 characters of these two strings are the same.  */
/*      Initially the length of the first string is checked; it should be >=4.          */
/* (c)	The characters of the first string whose array index is an even number          */
/*      are copied to a new array. This array is printed as a string.                   */
/*--------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>

int main()
{
		int i,j,sum;
		char str1[13],str2[13],str3[7];
		/* α */
		printf( "\nGive first string (up to 12 characters):  ");
		scanf("%s",str1);
		printf( "\nGive second string (up to 12 characters):  ");
		scanf("%s",str2);
		
		/* β */
		if ((strlen(str1)<4) || (strlen(str2)<4))
		printf( "\nError!! Strings should have more at least 4 characters!! Program aborted" );
		else
		{
			sum=0;
			for (i=0;i<4;i++)
				if (str1[strlen(str1)-i]==str2[strlen(str2)-i]) 
					sum++;
			if (sum==4)
		   		printf( "\n\tThe last 4 characters of first and second string are the same\n" );
			else
			{
			   printf( "\n\tThe last 4 characters of first and second string are NOT the same\n " );
			}
		}
		/* γ */
		for (i=1;i<strlen(str1);i=i+2)  str3[i/2]=str1[i];
		str3[i/2]='\0'; /* για να καταστεί αλφαριθμητικό το str3 */
		printf( "\nNew string: %s",str3 );

		return 0;
	}
