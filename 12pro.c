#include<stdio.h>
int main()
{
	int side,area,peri;
	printf("Enter the Length of Rectangle :- ");
	scanf("%d",&side);
	area = (side*side);
	peri = (4*side);
	printf("Area of Square  :- %d\n ", area);
	printf("Perimeter of square:- %d\n", peri);
	return 0;
}
