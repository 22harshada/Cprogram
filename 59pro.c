#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b, result;
	char operator;
	
	printf("Enter the value of a :- ");
	scanf("%d", &a);
	printf("Enter the value of b :-");
	scanf("%d", &b);
	printf("Enter the Arithmatic Operator :-");
	scanf(" %c", &operator);
	
	
	if(operator == '+')
	{
	result = a + b;
	printf("Result :- %d\n ",result);
	}
	else if(operator =='-')
	{
	result = a - b;
	printf("Result :- %d\n ", result);
	}
	else if(operator =='*')
	{
	result = a * b;
	printf("Result :- %d\n ", result);
	}
	else if(operator =='/')
	{
	result = a / b;
	printf("Result :- %d\n ", result);
	}
	else if(operator =='%')
	{
	result = a % b;
	printf("Result :- %d\n ", result);
	}
	else
	{
	printf(" Invalid Operator ");

	}
	return 0;
}	
	
