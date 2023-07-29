#include<stdio.h>
int main()
{
	int n,newNumber;
	printf("Enter the Number :- ");
	scanf("%d",&n);
	
	if(n%4==0)
	{
	newNumber = n+1;
	printf("The value Increased by 1\n New Number :- %d\n", newNumber);
	}
	else
	{
	newNumber= n-1;
	printf("The value Decrease by 1\n New Number :- %d\n", newNumber);
	}
	return 0;
}	
