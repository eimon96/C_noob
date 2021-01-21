#include <stdio.h>

enum carmakeT {Mercedes, BMW, Aud};

struct stockT
{
	carmakeT make;
	char model[15];
	float price;
	int avail;
};

int main()
{
	stockT inventory[40];

}



// typedef float realNumber;


//struct addrT
//{
//	char name[40], street[40], city[30];
//	unsigned int zipCode;
//} 
//
//address1 = {"Demis Pappas", "Rodou 23", "Serres", 62124},
//address2 = {"John Doe", "Limnou 32", "Serres", 62124};
//
//struct addrT address1 = {"Demis Pappas", "Rodou 23", "Serres", 62124};
//address2 = {"John Doe", "Limnou 32", "Serres", 62124};
