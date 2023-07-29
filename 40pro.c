#include<stdio.h>
int main()
{
	int Sp,Cp,loss,profit;
	printf("Enter the Selling Price :-");
	scanf("%d", &Sp);
	printf("Enter the Cost Price :-");
	scanf("%d", &Cp);

	
	if(Sp>Cp)
	{
	profit= (Sp-Cp);
	printf("Profit :- %d\n", profit);
	}
	else if(Sp<Cp)
	{
	loss=(Cp-Sp);
	printf("Loss :- %d\n", loss);
	}
	else
	{
		printf("No Profit and No Loss\n");
	}

	printf("End of Program \n");		 
	
	return 0;
}
	
