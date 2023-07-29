#include<stdio.h>
int main()
{
	int a,b,sum,sub,mul;
	float div;
	printf("Enter the Two Numbers :- ");
	scanf("%d%d", &a,&b);
	sum= a+b;
	sub= a-b;
	mul= a* b;
	div= a/b;
	printf("Sum of two Numbers:- ");
	printf("%d\n",sum);
	printf("Substraction of two Numbers:- ");
	printf("%d\n",sub);
	printf("Multiplication of two Numbers:- ");
	printf("%d\n",mul);
	printf("Division of two Numbers:- ");
	printf("%f\n",div);
	return 0;
	}
