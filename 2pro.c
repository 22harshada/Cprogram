#include<stdio.h>
int main()
{
	int a,b,sum;
	float avg;
	printf("Enter the Values :- ");
	scanf("%d%d",&a,&b);
	sum= a+b;
	avg =sum/2.00;
	printf("Average of two Numbers :-");
	printf("%f\n", avg);
	return 0;
}
