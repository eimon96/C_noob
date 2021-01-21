#include<stdio.h>

typedef struct vect 
{
	float x,y;
} vector;

void prvect(char d, vector v);
void scanvect(vector *p);
float inprodr(vector *p, vector *q);
vector addvectr(vector *p, vector *q);

/*------------------------------------*/

int main()
{
	vector a, b, c;
	scanvect(&a);
	prvect('a', a);
	scanvect(&b);
	prvect('b', b);
	printf("\tThe inner product of a and b is:%.2f\n", inprodr(&a, &b));
	c = addvectr(&a, &b);
	prvect('c', c);
	
	return 0;
}
/*------------------------------------*/

void prvect(char d, vector v)
{
	printf("Vector %c is ", d);
	printf("(%.2f,%.2f)\n", v.x, v.y);
}

/*------------------------------------*/

void scanvect( vector *p)
{
	printf("Give the x co-ordinate: ");
	scanf("%f", &p -> x);
	printf("Give the y co-ordinate: ");
	scanf("%f", &p -> y );
}

/*------------------------------------*/

float inprodr(vector *p, vector *q)
{
	return((*p).x * (*q).x + (p -> y) * (q -> y));
}

/*------------------------------------*/

vector addvectr(vector *p, vector *q)
{
	vector sum;
	sum.x = (p -> x) + (q -> x);
	sum.y = (p -> y) + (q -> y);
	
	return(sum);
}



