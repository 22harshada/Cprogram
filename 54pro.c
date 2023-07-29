#include<stdio.h>
int main()
{
	int year;
	double salary,newBonus;
	printf("Enter the Year of Service :- ");
	scanf("%d",&year);
	printf("Enter the Salary of Employee :- ");
	scanf("%lf",&salary);
	
	if(year > 5)
	{
	float netBonus =salary+(salary * 0.05);
	newBonus= netBonus;
	printf("CONGRATULATION! You are Eligible for Net Bonus. \n");
	printf("New Bonus :- %0.2lf/-\n", newBonus);
	}
	else
	{
	printf("You are Not Eligible for Net Bonus because of your year of service is less\n");
	printf("Salary :- %lf/-\n", salary);
	}
	return 0;
}	
