#include <stdio.h>

struct addressT
{
	char name[40], street[40], city[40];
	unsigned int number, zipCode;
};
 
struct dayT
{
	int date;
	int month;
	int year;
}; 

struct personT
{
	struct addressT addr;
	struct dayT birthday;
}; 

int main()
{
	struct addressT addr1 = {"John Doe", "Telou Agra", "Serres", 10, 62124};
	
	struct addressT addr[10] = 
	{
		{"Ken Thomson", "Rodou", "Serres", 23, 61124},
		{"Brian Kernighan", "Dilou", "Serres", 26, 62124},
	};
	
	struct personT p = 
	{
		{"Brian Kernighan", "Dilou", "Serres", 26, 62124},
		{28, 1, 79},
	};
	
	printf("\n\tstruct address\n");
	printf("%s\n%s %d\n%d\n%s\n", addr1.name, addr1.street, addr1.number, addr1.zipCode, addr1.city);
	printf("\n\tstruct person\n");
	printf("%s\n%s %d\n%d\n%s\n", p.addr.name, p.addr.street, p.addr.number,p.addr.zipCode, p.addr.city);
	printf("%d-%d-%d\n", p.birthday.date, p.birthday.month, p.birthday.year);
	printf("\n\tPinakas\n");
	printf("%s\n%s\n", addr[0].name, addr[1].name);
	printf("%c\n", addr[1].name[0]);
}






