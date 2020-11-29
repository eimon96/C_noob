#include <stdio.h>

int main()
{
	int n, p, k;
	
	for (n=1; n<=9; n++)
	{
			//n^p
			for (p=1; p<=4; p++)
			{
				int power = 1;
				for(k=1; k<=p; k++)
				{
					power *= n;
				}
				printf("%d^%d = %d\n", n, p, power);
			}
	}
	
	
	return 0;
}
