#include <stdio.h>

float getAverage(float newN);

//static float arithmitis= 0; 		//kai edw to idio einai
//static int paronomastis = 0;

int main()
{
	float MO;
	
	float n = 1;
	while(n != 0)
	{
		printf("Give a number or press 0 to finish: ");
		scanf("%f", &n);
		
		MO = getAverage(n);
		printf("The new average is %.3f\n", MO);
	}
	
	return 0;
}


float getAverage(float newN)
{
	static float arithmitis= 0;
	static int paronomastis = 0;
	
	paronomastis++;
	arithmitis += newN;
	
	return(arithmitis/paronomastis);
	
}
