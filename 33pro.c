#include<stdio.h>
int main()
{
	int a,b,closestN;
	printf("Enter the Number a:- ");
	scanf("%d", &a);
	printf("Enter the Number b:- ");
	scanf("%d",&b);
	closestN = (a -(a%b));
	printf("The closes Number is :- %d\n", closestN);
	return 0;
	}
	
