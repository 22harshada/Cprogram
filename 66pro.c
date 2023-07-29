#include<stdio.h>
int main()
{
	float basicSalary, grossSalary;
	float hra,da;
	
	printf("Enter the Basic Salary of Employee :- ");
	scanf("%f",&basicSalary);
	
	if(basicSalary <= 10000)
	{
	hra= (0.2*basicSalary);
	da=(0.8*basicSalary);
	}
	else if (basicSalary <=20000)
	{
	hra = (0.25 * basicSalary);
	da= (0.9 * basicSalary);
	}
	else if (basicSalary > 20000)
	{
	hra = (0.3* basicSalary);
	da =(0.95 * basicSalary);
	}
	
	grossSalary = (basicSalary + hra + da);
	printf(" Gross Salary :- %f/- \n", grossSalary);
	
	return 0;
}	
