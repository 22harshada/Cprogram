#include<stdio.h>

int main()
{
	int radius, aCircle;
	float pi;
	pi=3.1417;
	printf("Enter the Radius of Circle :- ");
	scanf("%d",&radius);
	aCircle= (pi*(radius*radius));
	printf("Area of Circle :- %d\n", aCircle);
	return 0;
}
