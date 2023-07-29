#include<stdio.h>
int main() 
{
	float mrp, discount, sellingPrice;
	printf("Enter the MRP of the product: ");
	scanf("%f", &mrp);
	printf("Enter the discount percentage: ");
	scanf("%f", &discount);
	sellingPrice = mrp - (mrp * (discount / 100));
	printf("The selling price of the product is: %0.2f\n", sellingPrice);
	return 0;
}
