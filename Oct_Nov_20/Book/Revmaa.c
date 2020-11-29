#include <stdio.h>

int main()
{
	float KW, PS, ER, ENAN;
	float SL;
	float LHR, LT, FPA, TK, PX, TAPE, TNERIT, DT, DF, TAP;
	
	printf("Dwse KW, PS, ER, ENAN me enter:");
	scanf("\n%f", &KW);
	scanf("\n%f", &PS);
	scanf("\n%f", &ER);
	scanf("\n%f", &ENAN);
	
	//LHR
	TK = 0;
	if (KW <= 820)
		TK = KW * 0.06817;
	else if (KW <= 1640)
		TK = 820 * 0.06817 + (KW - 820) * 0.08687;
	else if (KW <= 2050)
		TK = 820 * 0.06817 + (1640 - 820) * 0.08687 + (KW - 1640) * 0.10662;
	else
		TK = 820 * 0.06817 + (1640 - 820) * 0.08687 + (2050 - 1640) * 0.10662 + (KW - 2050) * 0.14127;
	
	PX = 36;
	TAPE = 3.5;

	LHR = TK + PX - PS - ER + TAPE;
	
	//LT
	TNERIT = 13.10 - ENAN;
	DT = 50;
	DF = 6.18;	
	TAP = 6.80;
	
	LT = TNERIT + DT + DF + TAP;
	
	//SL
	FPA = (8.0 / 100.0) * LHR;
	SL = LHR + LT + FPA;
	
	printf("\nTeliko poso: %f evrw\n", SL);
	
	
	return 0;
}
