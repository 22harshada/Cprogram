#include<stdio.h>
int main()
{
	int days, mul;
	printf("Enter the Days :-");
	scanf("%d", &days);
	
	if(days <= 5)
	{
	mul = days * 2;
	}
	else if(days <= 10)
	{
	mul = days * 3;
	}
	else if(days <= 15)
	{
	mul = days * 4;
	}
	else 
	{
	mul = days * 5;
	}
	printf("Total Bill:- %d\n", mul);
	
	return 0;
}	

