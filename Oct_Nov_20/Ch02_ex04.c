/*
Να γραφεί πρόγραμμα, το οποίο:
(α) Θα αποθηκεύει σε μεταβλητές τα ακόλουθα:
 Την ημέρα γεννήσής σας (π.χ. 12)
 Τον μήνα γεννήσής σας (π.χ. 7)
 Το έτος γέννησής σας (π.χ. 1996)
 Το ύψος σας σε μέτρα (π.χ. 1.85)
 Το πρώτο γράμμα του ονόματός σας (π.χ. X)
(β) Τα ανωτέρω στοιχεία θα εμφανίζονται στην οθόνη. Η ημερομηνία θα εμφανίζεται στη μορφή
ημέρα/μήνας/έτος. Το ύψος θα εμφανίζεται με δύο δεκαδικά ψηφία.
*/

#include <stdio.h>

int main()
{
	int date,month,year;
	char name;
	float height;
	printf("Birth day:\t");
	scanf("%d",&date);
	printf("Birth month:\t");
	scanf("%d",&month);
	printf("Birth year:\t");
	scanf("%d",&year);
	printf("Height (in meters): ");
	scanf("%f",&height);  // float, not integer
	printf("Write the first letter of your name: ");
	scanf(" %c",&name);
	printf("\n\tI was born on %d/%d/%d, my height is %.2f and my name starts with the letter '%c'\n\n",date,month,year,hight,name);
	
	return 0;
}


