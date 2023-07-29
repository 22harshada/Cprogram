#include<stdio.h>
int main()
{
	float costPrice, roadTax;
	float totalPaid;
	printf("Enter the Cost Price of Bike :- ");
	scanf("%f",&costPrice);

	if (costPrice>100000)
	{
	roadTax= (costPrice*0.15);
	totalPaid = costPrice + roadTax;
	}
	else if(costPrice> 50000 && costPrice<=100000)
	{
	roadTax= (costPrice *0.10);
	totalPaid=costPrice + roadTax;
	}
	else if(costPrice<=50000)
	{
	roadTax= (costPrice*0.2);
	totalPaid=costPrice + roadTax;
	}
	else
	{
	roadTax=(costPrice*0.0);
	totalPaid=costPrice + roadTax;
	}
	printf("You have to Total Amount paid :- %f/-\n", totalPaid);
	
	return 0;
}	
	
	
	
	
