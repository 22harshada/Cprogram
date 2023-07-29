#include <stdio.h>

int main() 
{
	int quantity, unitCost, totalCost;
	printf("Enter the quantity: ");
	scanf("%d", &quantity);
	unitCost = 100;
	totalCost = (quantity * unitCost);
	
	if (totalCost > 1000) 
	{
	float discount = (totalCost * 0.1);
	totalCost -= discount;
	}
	
	printf("Total cost: %d\n", totalCost);
	return 0;
}

