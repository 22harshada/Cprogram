#include<stdio.h>
int main()
{
	int month;
	printf("Enter the Month Number :- ");
	scanf("%d", &month);
	
	if (month>=1 && month<=12)
{
	if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
	{
	printf(" In this Month there are 31 days!\n" );
	}
	else if (month==4 || month==6 || month==9 || month==11)
	{
	printf(" In this Month there are 30 days!\n");
	}
	else if (month==2)
	{
	printf("In this Month there are 28 or 29 days!\n");
	}
}
	else
	{
	printf("Invalid Month\n");
	}
	
	return 0;
}	
	
	
	
