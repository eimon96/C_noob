#include <stdio.h>

int main()
{
	float misthos;
	
	int noc; 	//number of children
//	1 --> 50
//	2 --> +100
//	3 --> +80
//	>=4 --> +200
	
	float telikos;
	
	misthos = 1000;
	noc = 2;
	telikos = misthos;
	
	switch(noc)
	{
		default: telikos = telikos + 200;
		case 3: telikos = telikos + 80;
		case 2: telikos = telikos + 100;
		case 1: telikos = telikos + 50;
		case 0: ;
	}
	
	printf("Total salary: %f\n", telikos);
	
	
	system("pause");
	return 0;
}
