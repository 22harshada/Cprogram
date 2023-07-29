#include<stdio.h>
int main()
{
	int l,b areaRectangle, periRectangle;
	printf("Enter the Length of a Rectangle :-");
	scanf("%d", &l);
	printf("Enter the Breadth of a Rectangle  :-");
	scanf("%d", &b);
	
	areaRectangle = l*b;
	periRectangle = 2*(l+b);
	printf("Area of Rectangle :- %d\n",areaRectangle);
	printf("Perimeter of Rectangle :- %d\n",periRectangle);
	
	if (areaRectangle > periRectangle)
	{
	printf("Area of Rectangle is Greater!");
	}
	else if (areaRectangle == periRectangle)
	{
	printf("Both are Equal!");
	}
	else 
	{
	printf("Perimeter of Rectangle!");
	}
	return 0;
}	
	
