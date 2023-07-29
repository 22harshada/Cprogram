#include<stdio.h>
int main()
{
	int n,rem;
	printf("Enter the Number:- ");
	scanf("%d", &n);
	rem= (n%10);
	
	if(rem%3==0)
	{
	printf("The Number is Divisible by 3 \n");
	}
	else
	{
	printf("The Number is Not Divisible by 3 \n");
	}
	
	return 0;
}	
