#include <stdio.h>
#include <math.h>

#define MY_ZERO 1E-5
#define ADD 1
#define SUB 2
#define MUL 3
#define DIV 4


int main()
{
	float num1, num2, result;
	int choice, flag = 0;
	
	printf("Give 1st number: ");
	scanf("%f", &num1);
	printf("Give 2st number: ");
	scanf("%f", &num2);
	printf("Select one of the following: ");
	printf("\n%d -> +", ADD);
	printf("\n%d -> -", SUB);
	printf("\n%d -> *", MUL);
	printf("\n%d -> /\n", DIV);
	scanf("%d", &choice);
	
	switch(choice)
	{
		case ADD:
			result = num1 + num2;
			break;
		case SUB:
			result = num1 - num2;
			break;
		case MUL:
			result = num1 * num2;
			break;
		case DIV:
			if (fabs(num2)>MY_ZERO) 
			{
				result = num1 / num2;
			}
			else 
			{
				printf("\t Error: division by 0"); 
				flag = 1; 
			}
			break;
		
		default:
			printf("This selection is not supported\n");
			break;
	}
	
	if (!flag) printf("Result: %f\n", result);
	
	
	return 0;	
}
