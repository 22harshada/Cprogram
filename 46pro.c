#include<stdio.h>
int main()
{
	int age;
	printf("Enter the Age :-");
	scanf("%d", &age);
	
	if(age>=18)
	{
	printf("The Person is eligible for Voting \n");
	}
	else
	{
	printf("The Person is Not Eligible for Voting \n");
	}
	
	return 0;
}	
