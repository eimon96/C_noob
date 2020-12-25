#include <stdio.h>

int main()
{
	char psonia[] = {'p', 'a', 't', 'a', 't', 'a', '2', '0', '7', '7'};
	int nums[] = {1,2,3,4,5,6,7,8,9}; 
	
	printf("%d\t%d", sizeof(psonia), sizeof(nums));
	
	printf("\n%d",sizeof(psonia)/sizeof(psonia[0]));
	printf("\t%d",sizeof(nums)/sizeof(nums[0]));
	
	
	return 0;
}
