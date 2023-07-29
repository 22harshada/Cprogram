#include<stdio.h>
int main()
{
	int h,l,b, lsaCuboid,tsaCuboid;
	printf("Enter the Height of Cuboid :- ");
	scanf("%d", &h);
	printf("Enter the length of Cuboid :- ");
	scanf("%d", &l);
	printf("Enter the breadth of Cuboid :- ");
	scanf("%d", &b);
	lsaCuboid= (2*h*(l+b));
	tsaCuboid= (2*((l*b)+(b*h)+(h*l)));
	printf("Lateral Surface area of Cuboid :- %d\n", lsaCuboid);
	printf("Total Surface area of Cuboid :- %d\n", tsaCuboid);
	return 0;
}
	
