#include <stdio.h>
#include <string.h>

#define filename "input.txt"
#define S 2


//almost ask3


int main()
{
	FILE* fp = fopen(filename, "r+");
 	int i = 0, counter = 0, sum = 0, n = 0;
 	float avg[S];

  	char ch;
  	
  	do
    { 
        fscanf (fp, "%d", &i); 
    	printf ("%d ", i);  
    	ch = fgetc(fp);
		sum += i;
    	n++;
    	
		if (ch == '$')
    	{
    		avg[counter] = (float) sum / (float) n;
    		sum = 0;
    		n = 0;
    		counter++;
    		printf("\n");
		}
		
    } while (!feof(fp));

    
  	fclose (fp);      
  	
  	
  	for (i = 0; i < sizeof(avg) / sizeof(avg[0]); i++)
  	{
  		printf("\nAvg[%d]: %.2f", i + 1, avg[i]);
	}
	
	
	return 0;
}
