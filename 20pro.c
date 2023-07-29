#include<stdio.h>
int main()
{
	int num,digLast;
	printf("Enter the Number:- ");
	scanf("%d",&num);
	digLast= (num%10);
	printf("Last Digit of a Number :- %d\n", digLast);
	return 0;
}
	
