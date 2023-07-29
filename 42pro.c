#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Number :- ");
	scanf("%d", &n);
	
	if(n>99 && n<999)
	{
	printf("The Number is Three Digit \n");
	}
	else
	{
	printf("The Number is Not a Three Digit \n");
	}
	printf("---End of The Program---\n");
	
	return 0;
}

