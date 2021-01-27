#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LOWER 3
#define UPPER 13

int main()
{
	int i,j,k,string_max;
	float b_float[2][3][2],sum;
	char b_char[3][21];
	//-----------------------------------------------------------------------
	// (i)
	printf("\n\n");
	for (i=0;i<2;i++)
		for (j=0;j<3;j++)
			for (k=0;k<2;k++)
			{
				printf("\nb_float[%d][%d][%d]:  ",i+1,j+1,k+1);
				scanf("%f",&b_float[i][j][k]);
			}
	printf("\n\nArray of real numbers:");
	//-----------------------------------------------------------------------
	// (ii)
	sum=0.0;
	for (i=0;i<2;i++)
		for (j=0;j<3;j++)
			for (k=0;k<2;k++)
			{
				if ((b_float[i][j][k]>=LOWER) && (b_float[i][j][k]<=UPPER))  sum=sum+b_float[i][j][k];
			}
	printf("\n\tSum of b_float elements: %f",sum);
	//-----------------------------------------------------------------------
	// (iii)
	i=0;
	while (i<3)
	{
		printf("\n\nGive string no %d:  ",i+1);
		scanf("%s",b_char[i]);
		i++;
	}
	printf("\n\nArray b_char:");
	for (i=0;i<3;i++) printf("\n\tb_char[%d] = %s\n",i,b_char[i]);
	//-----------------------------------------------------------------------
	// (iv)
	string_max=0;
	if (strlen(b_char[1])>strlen(b_char[0]))
	{
		if (strlen(b_char[1])>strlen(b_char[2])) string_max=1;
		else string_max=2;
	}
	else if (strlen(b_char[2])>strlen(b_char[0])) string_max=2;
	/*	Δε χρειάζεται άλλος έλεγχος καθώς εάν δεν ισχύσουν οι ανωτέρω συνθήκες, ισχύει η ανάθεση 			string_max=0 */ 
	printf("\n\nThe string with the maximum number of characters is no %d",string_max+1);
	for (j=0;j<strlen(b_char[string_max]);j++)
	{
		if (b_char[string_max][j]=='r') printf("\n'r' was found in the %d place",j+1); 	
	}
  return 0;
}

