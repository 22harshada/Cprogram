#include<stdio.h>
int main()
{
	int l,b,area,peri;
	printf("Enter the Length of Rectangle :- ");
	scanf("%d",&l);
	printf("Enter the Breadth of Rectangle :- ");
	scanf("%d",&b);
	area = (l*b);
	peri = (2*(l+b));
	printf("Area of Rectangle  :- %d\n ", area);
	printf("Perimeter of Rectangle :- %d\n", peri);
	return 0;
}
