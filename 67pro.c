#include<stdio.h>
int main()
{
	int rollnumber;
	int rem;
	
	printf("Enter the Roll Number :- ");
	scanf("%d", &rollnumber);
	
	if(rollnumber%5==0)
	{
	printf("he/she is a Group Leader \n");
	}
	else
	{
	printf("he/she is not a Group Leader \n");
	}
	return 0;
}
	
