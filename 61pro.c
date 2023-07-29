#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Number :-");
	scanf("%d", &n);
	
	if((n>=0) && (n<=9))
	{
	printf("Number is One Digit Number ");
	}
	else if ((n>=10) && (n<=99))
	{
	printf("Number is Two Digit Number  ");
	}
	else if ((n>99) && (n<=999))
	{
	printf("Number is Three Digit Number  ");
	}
	else if ((n>999) && (n<=9999))
	{
	printf("Number is Foure Digit Number");
	}
	else
	{
	printf("Number is More than Foure Digit Number ");
	}
	return 0;
}	
	
	
	
	
