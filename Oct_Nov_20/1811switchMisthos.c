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
	noc = 3;
	
	switch(noc)
	{
		case 0: telikos = misthos; break;
		case 1: telikos = misthos + 50; break;
		case 2: telikos = misthos + 150; break;
		case 3: telikos = misthos + 230; break;
		default: telikos = misthos + 430; break;
	}
	
	printf("Total salary: %f\n", telikos);
	
	
	system("pause");
	return 0;
}
