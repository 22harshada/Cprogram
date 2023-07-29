#include<stdio.h>
int main()
{
	int year;
	scanf("%d", &year);
	
	if(year%4 == 0 && year%100 == 0 && year%400 == 0)
	{
		printf("Year is Leap \n");
	}
	else if(year%4==0 && year%100 == 0)
	{
	printf("year is leap \n");
	}
	else
	{
	printf("year is not leap \n");
	}
	printf("---END OF PROGRAM---\n");
	return 0;
}
		
	
