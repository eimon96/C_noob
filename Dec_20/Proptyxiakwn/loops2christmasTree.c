#include <stdio.h>

int main()
{
	int i, j, k;
	int n;
	
	printf("Dwse grammes: ");
	scanf("%d", &n);
	printf("\n");
	
	
	for(i = 0; i < n; i++)
	{   
		for(j = i + 1; j < n; j++)
	       printf(" ");
	    
		for(k = 0; k <= 2*i; k++)
	       printf("*");
	    
		if(i < n - 1) 
			puts("");
	}
	printf("\n\n");
	
	system("pause");
	return 0;
}


/*
You have to find a pattern. Say you want a tree with n rows. 
Last row is going to have 2n-1 stars. Row before it will have 2n-3 and so on. 
To print a row, first you print a number of spaces, then a number of stars. 
For last row, you print 0 spaces and 2n-1 stars. 
For row before it, you print 1 space and 2n-3 stars and so on.

https://stackoverflow.com/questions/26204277/how-to-make-a-christmas-tree-using-loop-in-c-program
*/

