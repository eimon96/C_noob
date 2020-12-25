#include <stdio.h>

int main()
{
	int pow_deka[7], i;
	
	pow_deka[0] = 1;
	for (i = 1; i <= 6; i++)
	{
		pow_deka[i] = pow_deka[i-1] * 10;
	}
	
	int x, y;
	printf("x = ");
	scanf("%d", &x);
	y = x;
	
	int z[7];
	for (i = 6; i >= 1; i--)
	{
		z[i] = y / pow_deka[i];
		y = y % pow_deka[i];
	}
	z[0] = y;
	y = z[6] ;
	for (i = 1; i < 7; i++) 
		y = y + pow_deka[i] * z[7-(i+1)];
		
	printf( "\nx=%d, y=%d\n", x, y);	
	
	
	return 0;
}

// einai apo to vivlio sel94
