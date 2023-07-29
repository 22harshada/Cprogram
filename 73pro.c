#include<stdio.h>
int main()
{
	int units,bill = 0;
	printf("Enter the units :-");
	scanf("%d", &units);
	
	if(units <= 100 )
	{
	bill = 0;
	}
	else if(units <= 200)
	{
	bill =(units-100) * 5;
	}
	else 
	{
	bill = 100*5+(units -200)*10;
	}
	
	printf("Total Bill:- ₹ %d\n",bill);
	
	return 0;
}	

