#include <stdio.h>
#include <string.h>

/* structure definition */
struct addressT /* define a new data type: structure with 5 members */
{
  char name[40], street[15];
  int number, zip_code;
  char city[15];
}; /* end of addressT definition */

struct dayT /* define a new data type: structure with 3 members */
{
  int date, month, year;
}; /* end of dayT definition */

struct personT /* define a nested structure */
{
  struct addressT addr; struct dayT birthday; /* each member is a structure, defined above */
}; /* end of personT definition */
/*-----------------------------------------*/
int main()
{
/* set new variables and initialize them */
  int i;

  struct addressT addr1={"John Doe","Telou Agra",10,62124,"Serres"}; /* Full initialization */
  struct addressT addr[10]={        /* Partial initialization */
          {"John Doe","Telou Agra",10,62124,"Serres"},
          {"Kitsos Doe","Julou",26,62124,"Serres"} };
  struct personT p={
          {"Mitsos Doe","Dilou",26,61124,"Serres"},
          {28,1,79} };

  for (i=2;i<10;i++)
  {
  	printf("\n\tGive the zip code of address no %d:",i+1);
    scanf("\t%d",&addr[i].zip_code);
  }
  
  addr[4].zip_code=12243;
  strcpy(p.addr.street,"Athinas");

  printf( "\nstruct address\n");
  printf( "%s\n%s\n%d\n%d\n%s\n",addr1.name,addr1.street,
         addr1.number,addr1.zip_code,addr1.city );

  printf( "\n\n\nstruct person\n");
  printf("\tstreet name: %s\n\n",p.addr.street);

  printf( "%s\n%s\n%d\n%d\n%s\n",p.addr.name,p.addr.street,
                p.addr.number,p.addr.zip_code,p.addr.city );
  printf( "%d-%d-%d\n",p.birthday.date,p.birthday.month,
               p.birthday.year );

  printf( "\n\nPinakas\n" );
  printf( "%s\n%s\n\n",addr[0].name,addr[1].name );
  printf( "\nFirst character of member name for the second address: %c\n",addr[1].name[0] );
  
  printf("\tzip code of the fifth address:%d",addr[4].zip_code);
  
  
return 0;
} /* end of main */

