#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Number :- ");
	scanf("%d", &n);
	
	if(n>999 && n<9999)
	{
	printf("The Number is Four Digit ");
	}
	else
	{
	printf("The Number is Not a four Digit \n");
	}
	printf("---End of The Program---\n");
	
	return 0;
}

