#include <stdio.h>

#define N 3

void give_digits(int x, int *arr);
int get_digits(int *arr);
int transform(int x);
void swap_digits(int *arr);


int main()
{
	int x, y, i = 0;
	for (i = 0; i < N; i++)
	{
		printf( "Give a number: " );
		scanf("%d", &x);
		printf( "\nCoded number=%d\n\n", transform(x));
	}
	
	return 0;
}


void give_digits(int x, int *arr)
{
	int y;
	arr[3] = x / 1000;
	y = x % 1000;
	arr[2] = y / 100;
	y = y % 100;
	arr[1] = y / 10;
	arr[0] = y % 10;
}


int get_digits(int *arr)
{
	return(arr[0] + arr[1] * 10 + arr[2] * 100 + arr[3] * 1000);
}


int transform(int x)
{
	int y, arr_x[4], arr_y[4], i, temp;
	
	give_digits(x, arr_x);
	
	for (i = 0; i < 4; i++)
		arr_y[i] = (arr_x[i] + 7) % 10;
	
	swap_digits(arr_y);
	
	return(get_digits(arr_y));
}


void swap_digits(int *arr)
{
	int temp;
	temp = arr[0];
	arr[0] = arr[2];
	arr[2] = temp;
	temp = arr[3];
	arr[3] = arr[1];
	arr[1] = temp;
}





