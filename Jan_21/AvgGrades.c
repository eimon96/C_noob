 #include <stdio.h>
 
 int main (int argc, char *argv[])
 {
 	int M, N;
 	int i, j;
 	float Grade;
 	float Sum;
 	float Avg;
 	
	system ("chcp 1253");
 	
 	printf("Αριθμός Φοιτητών : ");
 	scanf ("%d", &M);
 	printf("Αριθμός Μαθημάτων: ");
 	scanf ("%d", &N);
 	for (i = 1; i<= M; i++)
 	{
 		printf ("Φοιτητής Νο : %d\n", i);
	 	Sum = 0;
	 	for (j = 1; j <= N; j++)
	 	{
	 		printf ("Βαθμός %dου μαθήματος : ", j);
			scanf ("%f", &Grade);
			Sum = Sum + Grade; 	
		}
	 	Avg = Sum / N;
	 	printf ("Μεσος όρος = %f\n", Avg);
	 	printf ("---------------------------\n");
 	}
 	return 0;
 	
 }
