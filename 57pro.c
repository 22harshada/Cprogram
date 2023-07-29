#include<stdio.h>
int main()
{
	int a,b,sum,sub;
	printf("Enter the Value of A :- ");
	scanf("%d", &a);
	printf("Enter the Value of B :- ");
	scanf("%d", &b);
	
	if(a>b)
	{
	sub= a-b;
	printf("Substraction of Two Numbers :- %d\n", sub);
	}
	else
	{
	sum= a+b;
	printf("Addition of Two Numbers :- %d\n", sum);
	}
	return 0;
}
	
	
