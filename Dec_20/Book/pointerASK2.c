#include <stdio.h>
#include <string.h>

void rev(char *pstring);
void conv(char *pstring);

int main()
{
	char str[20];
	
	printf("Dwse string: ");
	scanf("%s", str);
	
	rev(&str);
	conv(&str);
	
	printf("\n\n%s", str);
	
	return 0;
}


void rev(char *pstring)
{
	int l = strlen(pstring); 
    char *begin_ptr, *end_ptr, temp; 
  
    begin_ptr = pstring; 
    end_ptr = pstring; 
   
    int i;
	for (i = 0; i < l - 1; i++) 
        end_ptr++; 
   
    for (i = 0; i < l / 2; i++) { 
  
        temp = *end_ptr; 
        *end_ptr = *begin_ptr; 
        *begin_ptr = temp; 

        begin_ptr++; 
        end_ptr--; 	

	}
}


void conv(char *pstring)
{
	int l = strlen(pstring);
	
	int i;
	for(i = 0; i < l; i++)
	{
		if ((int)*pstring >= 65 && (int)*pstring <= 90)
			*pstring = tolower(*pstring);
		else if ((int)*pstring >= 97 && (int)*pstring <= 122)
			*pstring = toupper(*pstring);
			
		*pstring++;
	}
	 
	
}



