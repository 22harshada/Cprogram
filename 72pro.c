#include<stdio.h>
int main()
{
	int unit;
	scanf("%d",&unit);
	float bill,surcharge;
	
	if(unit <= 50)
	{
	bill = unit * 0.50;
	}
	else if(unit <= 150)
	{
	bill = ((50*0.50)+ (unit-50 )* 0.75);
	}
	else if(unit <= 250)
	{
	bill = ((100 *0.75)+(50*0.50)+(unit - 150)*1.20);
	}
	 else
	 {
	 bill = ((100*1.20)+(100*0.75)+(50*0.50)+(unit - 200)*1.50);
	  surcharge = bill*0.20;
	 }
	
	 bill = surcharge + bill;
	 printf("Total Bill :- %0.2f\n",bill);
	 return 0;
	} 
	 
