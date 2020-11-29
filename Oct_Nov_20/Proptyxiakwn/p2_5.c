#include <stdio.h>
#define MY_PI 3.14

int main()
{
	float m, E, V, Es, Vs;
	
	printf("Dwse mhkos akmhs kubou se metra: ");
	scanf("%f", &m);
	
	E = m*m*6;  	//embadon kubou
	V = m*m*m;  	// ogkos kubou
	
	printf("\nE = %.1f m^2, V = %.1f m^3\n", E, V);
	
	float r = m; //aktina sfairas
	
	Es = 4 * MY_PI * r*r; 		//embadon sfairas
	Vs = (4.0/3.0) * MY_PI * r*r*r;	//ogkos sfairas
	
	printf("\nEsfairas = %.1f m^2, Vsfairas = %.1f m^3\n", Es, Vs);
	
	return 0;
}
