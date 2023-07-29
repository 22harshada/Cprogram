#include<stdio.h>
int main()
{
	int sum,a,b;
	printf("Enter the Number of a :-");
	scanf("%d",&a);
	printf("Enter the Number of b :-");
	scanf("%d",&b);
	
	sum= a+b;
	if(sum>=15 && sum<=20)
	{
	printf(" 20 \n");
	}
	else{
	printf("The sum dose not belong in between 15 to 20 \n");
	printf("Sum :-%d\n", sum);
	}
	
	
	return 0;
}
