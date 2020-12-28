#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>


char **alloc_2_char(int size1, int size2);
void free_2_char(char **deikt, int size1);
void separate(char **pall, char **pnm, char **psr);
void sort(char **pnm, char **psr, char **pnm_new, char **psr_new);


int main()
{
	char **all, **nm, **nm_new, **sr, **sr_new;
	int i, j;
	
	all = alloc_2_char(2, 41);
	nm = alloc_2_char(2, 16);
	nm_new = alloc_2_char(2, 16);
	sr = alloc_2_char(2, 26);
	sr_new = alloc_2_char(2, 26);
	
	printf("Give first name: ");
	gets(all[0]);
	
	printf("\nGive second name: ");
	gets(all[1]);
	
	separate(all, nm, sr);
	
	for (i = 0; i < 2; i++)
		printf("\nnm[%d]=%s\tsr[%d]=%s", i, nm[i] ,i, sr[i]);
		
	sort(nm, sr, nm_new, sr_new);
	
	for (i = 0; i < 2; i++)
		printf("\nnm_new[%d]=%s\tsr_new[%d]=%s", i, nm_new[i], i, sr_new[i]);
	
	free_2_char(sr_new, 2);
	free_2_char(sr, 2);
	free_2_char(nm_new, 2);
	free_2_char(nm, 2);
	free_2_char(all, 2);
	
	return 0;
}


char **alloc_2_char(int size1, int size2)
{
	int i;
	char **deikt;
	
	deikt = (char **)malloc(size1 * sizeof(char *));
	assert(deikt != NULL);
	for (i = 0; i < size1; i++)
	{
		deikt[i] = (char *)malloc(size2 * sizeof(char));
		assert(deikt[i] != NULL);
	}
	
	return(deikt);
}


void free_2_char(char **deikt, int size1)
{
	int i;
	
	for (i = (size1-1); i>= 0; i--) 
		free(deikt[i]);
	
	free(deikt);
}


void separate(char **pall, char **pnm, char **psr)
{
	int i, j;
	
	for (i = 0; i < 2; i++)
	{
		j = 0;
		while (pall[i][j] != ' ')
		{
			pnm[i][j] = pall[i][j];
			j++;
		}
		pnm[i][j] = '\0';
		j = 0;
		do
		{
			psr[i][j] = pall[i][strlen(pnm[i]) + j];
			j++;
		}while (pall[i][j ]!= '\0');
	}
}


void sort(char **pnm, char **psr, char **pnm_new, char **psr_new)
{
	int i, j, mikos, count = 0;
	
	mikos = (strlen(psr[0]) < strlen(psr[1])) ? strlen(psr[0]) : strlen(psr[1]);
	
	i = 0;
	do
	{
		if (psr[0][i] < psr[1][i]) 
			count++;
		i++;
	} while ((i<mikos) && (!count));
	
	if ((count) || (strlen(psr[0]) > strlen(psr[1])))
	{
		strcpy(psr_new[0],psr[1]);
		strcpy(psr_new[1],psr[0]);
		strcpy(pnm_new[0],pnm[1]);
		strcpy(pnm_new[1],pnm[0]);
	}
	else 
		for (i = 0; i < 2; i++)
		{
			strcpy(psr_new[i], psr[i]);
			strcpy(pnm_new[i], pnm[i]);
		}
}
