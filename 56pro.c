#include<stdio.h>
int main()
{
	int n,rem;
	printf("Enter the Number :- ");
	scanf("%d", &n);
	
	rem=(n%10);
	
	if (rem==3)
	{
	printf("The Number is Ends With 3!\n");
	}
	else if(rem==7)
	{
	printf("The Number is Ends with 7! \n");
	}
	else
	{
	printf("%d\n", n);
	}
	return 0;
}

