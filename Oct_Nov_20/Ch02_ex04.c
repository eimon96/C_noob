/*
�� ������ ���������, �� �����:
(�) �� ���������� �� ���������� �� ��������:
 ��� ����� �������� ��� (�.�. 12)
 ��� ���� �������� ��� (�.�. 7)
 �� ���� �������� ��� (�.�. 1996)
 �� ���� ��� �� ����� (�.�. 1.85)
 �� ����� ������ ��� �������� ��� (�.�. X)
(�) �� ������� �������� �� ������������ ���� �����. � ���������� �� ����������� ��� �����
�����/�����/����. �� ���� �� ����������� �� ��� �������� �����.
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


