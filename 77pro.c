#include<stdio.h>
int main()
{
	float a,b,c,d;
	int angle;
	printf("Enter the sides of a Quadrilateral :-");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	printf("Enter the angle of a Quadrilateral:-");
	scanf("%d",&angle);
	
	if(a == b && b == c && c == d)
	{
	if (angle == 90)
	
	printf("The Quadrilateral is a Square!\n");
	else
	
	printf("The Quadrilateral is a Rohmbus!\n");
	
	}
	 else if((a == b && c == d) || (a == c && b == d))
	{
	if(angle == 90)
	
	printf("The Quadrilateral is a Rectangle!\n");
	
	else
	
	printf("The Quadrilateral is a Parallelogram!\n");
	
	}
	else{
	
	printf("The Quadrilateral is a irregular Quadrilateral!\n");
	}
	return 0;
}	
