#include<stdio.h>
int main()
{
	int year;
	scanf("%d", &year);
	
	if(year%400 == 0)
	{
	if(year%4 == 0)
		printf("%d Year is a Leap \n",year);
	}
	else if(year%100 == 0)
	{
	printf("year is not leap \n");
	}
	else
	{
	printf("year is not leap \n");
	}
	printf("---END OF PROGRAM---\n");
	return 0;
}
		
	
