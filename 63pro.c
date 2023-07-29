#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Number :- ");
	scanf("%d", &n);
	
	if(n>0)
	{
	printf("The Number is Positive \n");
	}
	else if(n<0)
	{
	printf("The Number is Negative \n");
	}
	else 
	{
	printf("The Number is Zero \n");
	}
	
	return 0;
	
}	
