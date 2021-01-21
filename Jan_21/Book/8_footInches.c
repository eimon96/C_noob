#include <stdio.h>

struct DistT
{
	int feet;
	int inches;
};

struct DistT addDistances(struct DistT dist1, struct DistT dist2);
void displayDistance(struct DistT dist);

int main()
{
	struct DistT d1, d2, d3;
	
	printf("\n1st number of feet:");
	scanf("%d", &d1.feet);
	printf("\n1st number of inches:");
	scanf("%d", &d1.inches);
	printf("\n2nd second number of feet:");
	scanf("%d", &d2.feet);
	printf("\n2nd second number of inches:");
	scanf("%d", &d2.inches);
	d3 = addDistances(d1,d2);
	displayDistance(d1);
	printf(" + ");
	displayDistance(d2);
	printf(" = ");
	displayDistance(d3);
	
	return 0;
}

void displayDistance(struct DistT dist)
{
	printf("%d'%d'' ", dist.feet,dist.inches);
}

struct DistT addDistances(struct DistT dist1, struct DistT dist2)
{
	struct DistT dist3;
	dist3.inches = dist1.inches + dist2.inches;
	dist3.feet = 0;
	
	if (dist3.inches >= 12)
	{
		dist3.inches = dist3.inches - 12;
		dist3.feet++;
	}
	dist3.feet = dist3.feet + dist1.feet + dist2.feet;
	
	return(dist3);
}

// gia 12'12' + 12'12'' vgazei 25'12'' anti 26'





