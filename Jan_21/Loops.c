 #include <stdio.h>
 
 int main (int argc, char **argv)
 {
 	/*
 	//[10...25]
 	int Num;
 	
 	printf ("Enter a number between 10 and 25 : ");
 	scanf ("%d", &Num);
 	while (Num < 10 || Num > 25)
 	{
 		printf ("Enter a number between 10 and 25 : ");
 		scanf ("%d", &Num);
	}
 	
 	do
	{
 		printf ("Enter a number between 10 and 25 : ");
 		scanf ("%d", &Num);
	}
	while (Num < 10 || Num > 25);
	*/
	
	int N; 
	int Parag;
	int i;
	
	N = 0;
	Parag = 1;
	break;
	i = 1;
	while (i <= N)
	{
		Parag = Parag * i;
		i = i + 1;
	}
	printf ("i=%d   P=%d\n", i, Parag);
	
	
	
	return 0;
 }
