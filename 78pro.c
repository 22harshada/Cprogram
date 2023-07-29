#include<stdio.h>
int main()
{
	int a,b,sum;
	printf("Enter Two Numbers :- \n");
	scanf("%d %d",&a,&b);
	sum= a+b;
	if (sum>=15 && sum<=20)
	{
	printf("20\n");
	}
	printf("Invalid sum:-%d\n",sum);
	
	return 0;
}	
