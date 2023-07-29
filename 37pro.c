#include<stdio.h>
int main()
{
	int sp,cp;
	printf("Enter the Selling Price :- ");
	scanf("%d",&sp);
	printf("Enter the Cost Price :- ");
	scanf("%d",&cp);
	if (sp>cp)
	{
	int profit= (sp-cp);
	float pPer = ((profit / cp) * 100);
	printf("Profit Percentage :- %f\n", pPer);
	}
	printf(" Invalid ");
	
	return 0;
}	


