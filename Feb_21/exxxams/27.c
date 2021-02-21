#include <stdio.h>
#include <string.h>


//i
struct adomiT
{
	int intA[3][3];
	char charA[4][31];	
};


int stringLength(char metavlhth[4][31]);


int main()
{
	//ii
	struct adomiT ax, ay;
	
	//ii.a
	int i;
	for (i = 0; i < 4; i++)
	{
		printf("ax.charA[%d] = ", i);
		gets(ax.charA[i]);
	}
	
	//ii.b
	int j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			do
			{
				printf("ax.intA[%d][%d] = ", i, j);
				scanf("%d", &ax.intA[i][j]);
			} while(ax.intA[i][j] < -200 || ax.intA[i][j] > 300);
		}
	}
	
	//emfanish ax sthn othonh
	printf("\n\nPinakas akeraiwn ax.intA:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", ax.intA[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nPinakas alfarithmitikwn ax.charA:\n");
	for (i = 0; i < 4; i++)
	{
		printf("%s\n", ax.charA[i]);
	}
	
	
	//iii
	ay = ax;
	
	//iii a
	int sum;
	for(j= 0; j < 3; j++)
	{
		sum = 0;
		for(i = 0; i < 3; i++)
		{
			if (ay.intA[i][j] < 7 || ay.intA[i][j] > 11)
				sum += ay.intA[i][j];
		}
		
		//iii b
		printf("\nSthlh %d Athroisma = %d", j + 1, sum);
	}
	
	
	//iv
	int maxi = stringLength(ax.charA);
	printf("\n\nMegisto mhkos twn sumboloseirwn: %d", maxi);
	
	
	//v
	FILE *fp;
	fp = fopen("myresults.dat", "w");
	
	fprintf(fp, "Pinakas ay.intA:\n");
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			fprintf(fp, "%d\t", ay.intA[i][j]);
		}
		fprintf(fp, "\n");
	}
	
	
	fclose(fp);
	
	return 0;
}


int stringLength(char metavlhth[4][31])
{
	int maxi = strlen(metavlhth[0]);
	int i;
	
	for(i = 1; i < 4; i++)
		if (strlen(metavlhth[i]) > maxi)
			maxi = strlen(metavlhth[i]);
			
	return maxi;	
}

















