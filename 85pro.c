#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	if(num%5 == 0 && num%11 == 0)
	{
	printf("The Number is Divisible by 5 and 11 Both!\n");
	}
	else if(num%11 == 0)
	{
	printf("The Number is Divisible by 11!\n");
	}
	else if(num%5==0)
	{
	printf("The Number is Divisible by 5!\n");
	}
	else
	{
	printf("The Number are not Divisible by Both!\n");
	}
	return 0;
}	
	 
