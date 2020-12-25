#include <stdio.h>

int main()
{
	float KM;
	float TK, TA, TND, FPA_TK, FPA_YP; 
	float PT = 1.59;
	
	printf("Dwse KM: ");
	scanf("%f", &KM);
	
	if (KM <= 15)
	{
		TK = KM * 0.39;
	}
	else if (KM <= 60)
	{
		TK = (15 * 0.39) + (KM - 15) * 0.61;
	}
	else if (KM <= 81)
	{
		TK = (15 * 0.39) + (60 - 15) * 0.61 + (KM - 60) * 1.75;
	}
	else
	{
		TK = (15 * 0.39) + (60 - 15) * 0.61 + (81 - 60) * 1.75 + (KM - 81) * 2.45;
	}
	
	TA = (60.0 / 100.0) * TK;
	TND = (1.0 / 100.0) * TK;
	FPA_TK = (9.0 / 100.0) * TK;
	FPA_YP = (19.0 / 100.0) * (TA + TND + PT);
	
	float SL;
	
	
	SL = TK + TA + TND + PT + FPA_TK + FPA_YP;
	
	printf("\nSL = %f\n", SL);
		
		
	if (SL - (int)SL >= 0.5)
		SL = (int)SL + 1;
	else
		SL = (int)SL;
	
	
	printf("\nFinal: %f", SL);
	
	return 0;
}
