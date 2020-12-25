#include<stdio.h>

int main()
{
	int prwtoi[1000], i;
	
	for (i = 0; i < 1000; i++)
	{
		prwtoi[i] = 1;
	}
	
	for (i = 2; i < 1000; i++)
	{
		if (prwtoi[i] == 1)
		{
			int j;
			for (j = i + 1 ; j < 1000; j++)
			{
				if (j %  i == 0)
					prwtoi[j] = 0;
			}
		}
	}
	
	for (i = 0; i < 1000; i++)
	{
		if (prwtoi[i] == 1)
			printf("%d\n", i);
	}

	
	
	return 0;
}
