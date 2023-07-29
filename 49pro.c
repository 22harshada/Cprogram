#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Number :-");
	scanf("%d",&n);
	
	if(n>99 && n<1000)
	{
	printf("The Number is Three Digit Number\n");
	}
	else
	{
	printf("The Number is Not Three Digit Number\n");
	}
	return 0;
}	
