#include <stdio.h>

int main()
{
	int n;
	float moThet = 0; int sumThet = 0;
	int ginArn = 1, tetrKPer, countArtiwn = 0;
	
	do
	{
		printf("Enter integer or 0 to exit: ");
		scanf("%d", &n);
		
		
		if (n < 0)			// FIX THIS - if none prints 1
		{
			ginArn *= n;
		}
		else if (n > 0)		// FIX THIS - if none given 0/0
		{
			moThet += n;
			sumThet++;
		}
		
		
		if (n % 2) // perittos ------ sth C einai 0 = false , otidhpote allo einai true akoma k strings -------
		{
			tetrKPer = n*n;
			printf("(%d)^2 = %d\n", n, tetrKPer);
		}
		else
		{
			if (n == 0) break;
			countArtiwn++;
		}
		
	}while (n != 0);
	
	printf("\nMesos oros thetikwn: %f", moThet/sumThet);
	printf("\nGinomeno arnhtikwnn: %d", ginArn);
	printf("\nPlhthos artiwn %d", countArtiwn);
	
	
	return 0;
}
