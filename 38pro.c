#include<stdio.h>
int main()
{
	int sp,cp;
	printf("Enter the Selling Price :- ");
	scanf("%d",&sp);
	printf("Enter the Cost Price :- ");
	scanf("%d",&cp);
	if (sp<cp)
	{
	
	float loss= (cp-sp);
	float lPer = (loss / cp * 100);
	printf("Loss Percentage :- %f\n", lPer);
	}
	else{
	printf(" Invalid ");
	}

	
	return 0;
}	

