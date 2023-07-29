#include<stdio.h>
int main()
{
	int age, days,gender;
	int wagePerDay;
	printf("Enter the Gender if (M=0 and F=1):-");
	scanf("%d",&gender);
	printf("Enter the age:-");
	scanf("%d",&age);
	printf("Enter the Working Days:- ");
	scanf("%d",&days);
	
	if(age>=18 && age<30)
	{
	if(gender == 0 )
	{
	wagePerDay=days*700;
	}
	else
	{
	wagePerDay=days*750;
	} }
	else if(age>=30 && age<=40)
	{
	if(gender == 0)
	{
	wagePerDay==days*800;
	}	
	else
	{
	wagePerDay= days*850;
	}
	}
	printf("Wage of the Days :- %d\n", wagePerDay);
	return 0;}
	
