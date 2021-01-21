#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct hiredateT
{
	int year,month,day;
};

/*-------------------------------*/

struct jobDescrT
{
	char title[40], sector[40], bossName[40];
	int codeNo, officeNo, salary;
	struct hiredateT hire;
};

struct nmT
{
	char name[40], surname[40];
};

struct addressT
{
	char streetName[40], city[40];
	int streetNo, zipCode;
};

struct teleEmailT
{
	char officeNo[15], homeNo[15], officeMail[40];
};

/*-------------------------------*/

typedef struct employeeT
{
	struct nmT nm;
	struct addressT addr;
	struct teleEmailT teleMail;
	struct jobDescrT job;
} 
emplT;

/*-------------------------------*/

void printEmployee(emplT *ptr);
void getEmployee(struct employeeT *ptr);
void searchEmployee(int code, struct employeeT *ptr, int size);

/*-------------------------------*/

int main()
{
	int i, size, code;
	
	struct employeeT *pArr;
	
	printf("Give the number of employees: ");
	scanf("%d", &size);
	
	pArr = (struct employeeT *) malloc(size * sizeof(emplT));
	assert(pArr != NULL);
	
	for (i = 0; i < size; i++)
		getEmployee(&pArr[i]);
	
	printf("\n\n Give an employee's code number: ");
	scanf("%d", &code);
	
	searchEmployee(code, pArr, size);
	
	free(pArr);
	
	return 0;
}

/*-------------------------------*/

void getEmployee(emplT *ptr)
{
	printf("\n\t\tAdd new employee:\n\n");
	printf("\nEmployee's name: ");
	scanf("%s", ptr -> nm.name);
	printf("\nSurname: ");
	scanf("%s", ptr -> nm.surname);
	printf("\t\nEmployee's address:");
	printf("\nStreet name: ");
	scanf("%s", ptr -> addr.streetName);
	
	printf("\t\nEmployee's phone numbers and email:");
	printf("\nOffice phone number: ");
	scanf("%s", ptr -> teleMail.officeNo);
	
	printf("\t\nEmployee's job details:");
	printf("\nCode number: ");
	scanf("%d", &ptr -> job.codeNo);
	printf("\nSalary: ");
	scanf("%d", &ptr -> job.salary);
	printf("\nYear of recruitment: ");
	scanf("%d", &ptr -> job.hire.year);
}

/*-------------------------------*/

void printEmployee(emplT *ptr)
{
	printf("\n\t\tDetails of the employee with code number %d:\n\n", ptr -> job.codeNo);
	printf("\nEmployee's name: %s", ptr -> nm.name);
	printf("\nSurname: %s", ptr -> nm.surname);
	printf("\n\t\nEmployee's address:");
	printf("\nStreet name: %s", ptr -> addr.streetName);
	
	printf("\n\t\nEmployee's phone numbers and email:");
	printf("\nOffice phone number: %s", ptr -> teleMail.officeNo);
	
	printf("\n\t\nEmployee's job details:");
	printf("\nSalary: %d", ptr -> job.salary);
	printf("\nYear of recruitment: %d", ptr -> job.hire.year);

}

/*-------------------------------*/

void searchEmployee(int code, struct employeeT *ptr, int size)
{
	int j = 0, index = -1;
	while ((j < size) && (index == -1))
	{
		if (code == ptr[j].job.codeNo)
		index = j;
		j++;
	}
	printf("\n\n\t\tSearch results:\n");
	if (index == -1)
		printf("\nThe given employee code does not match to an existing one\n");
	else
		printEmployee(&ptr[index]);
}





