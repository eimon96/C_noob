 #include <stdio.h>
 
 int main (int argc, char **argv)
 {
 	int YY;
 	int MM;
 	int NoD;
 	
 	printf ("Enter Year  : ");
 	scanf ("%d", &YY);
 	//do
 	//{
 		printf ("Enter Month : ");
 		scanf ("%d", &MM);
 	//}
 	//while (MM < 1 || MM > 12);
	
	 	
 
 	
 	if (MM == 1 || MM == 3 || MM == 5 || MM == 7 || MM == 8 || MM == 10 || MM == 12)
 		NoD = 31;
 	else
		if (MM == 4 || MM == 6 || MM == 9 || MM == 11)
			NoD = 30;
		else 
 		{
 			if (MM == 2)
 			{
	 			if (YY % 400 == 0)
	 				NoD = 29;
	 			else
	 				if (YY % 100 == 0)
	 					NoD = 28;
	 				else
	 				    if (YY % 4 == 0)
	 				    	NoD = 29;
	 				    else
	 				    	NoD = 28;
	 		}
	 		else
	 		{
	 			printf ("Wrong Month\n");
			}
 		}
 		
 		printf ("Number of + Days of %d month of year %d = %d\n", MM, YY, NoD);
 		printf ("End of Program.");
 		
 	
	/*
 	switch (MM)
 	{
 		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: 
			printf ("31 Days\n");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf ("30 Days\n"); break;	
		case 2: 
		{
			if (YY % 400 == 0)
	 				printf ("29 Days\n");
	 			else
	 				if (YY % 100 == 0)
	 					printf ("28 Days\n");
	 				else
	 				    if (YY % 4 == 0)
	 				    	printf ("29 Days\n");
	 				    else
	 				    	printf ("28 Days\n");
		}
		default: printf ("Wrong Month\n");
	}
 	*/		    
 	
 	
 	
 	
 	return 0;
 }
