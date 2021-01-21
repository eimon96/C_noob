#include <stdio.h>

struct addressT
{
	char streetName[40], city[40];
	int streetNumber;
	int zipCode;
};

struct idT
{
	char name[40], surname[40];
	struct addressT addr;
};

struct teleT
{
	char wrNo[15], cellNo[15], faxNo[15];
};

struct emT
{
	char emWork[40];
	char emHome[40];
};

struct personT
{
	struct idT ident;
	struct teleT tel;
	struct emT email;
};


int main()
{
	struct personT directory[40];
	int i;
	for (i = 0; i <= 1; i++)
	{
		printf("\nRecord %d:", i+1);
		printf("\n\tName: "); 
		scanf("%s", directory[i].ident.name);
		printf("\n\tSurname: ");
		scanf("%s", directory[i].ident.surname);
		printf("\n\tStreet name: ");
		scanf("%s", directory[i].ident.addr.streetName);
		printf("\n\tStreet number: ");
		scanf("%d", &directory[i].ident.addr.streetNumber);
		printf("\n\tCity: " );
		scanf("%s", directory[i].ident.addr.city);
		printf("\n\tZip code: ");
		scanf("%d", &directory[i].ident.addr.zipCode);
		printf("\n\tTelephone: ");
		scanf("%s", directory[i].tel.wrNo);
		printf("\n\tCell telephone: ");
		scanf("%s", directory[i].tel.cellNo);
		printf("\n\tFax: ");
		scanf("%s", directory[i].tel.faxNo);
		printf("\n\tE-mail (work): ");
		scanf("%s", directory[i].email.emWork);
		printf("\n\tE-mail (home): ");
		scanf("%s", directory[i].email.emHome);
	}
	return 0;
}





