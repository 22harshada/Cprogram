#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Number :- ");
	scanf("%d", &n);
	
	if(n%7==0)
	{
	printf("The Number is Divisible by 7 \n ");
	}
	else
	{
	printf("The Number is Not Divisible by 7 \n");
	}
	printf("---End of The Program---\n");
	
	return 0;
}

