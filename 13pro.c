#include<stdio.h>
int main()
{
	int a,b,c;
	float smT;
	printf("Enter the side A of Triangle :- ");
	scanf("%d",&a);
	printf("Enter the side B of Triangle :- ");
	scanf("%d",&b);
	printf("Enter the side C of Triangle :- ");
	scanf("%d",&c);
	smT = ((a+b+c)/2.0);
	printf("Semiperimeter of Triangle :- %f\n", smT);
	return 0;
}
