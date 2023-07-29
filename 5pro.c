#include<stdio.h>
int main()
{
	int p,r,t,sI;
	printf("Enter the Principal :-");
	scanf("%d", &p);
	printf("Enter the Rate :-");
	scanf("%d", &r);
	printf("Enter the Time :-");
	scanf("%d", &t);
	sI= (p*r*t)/100;
	printf("Simple Interest:- ");
	printf("%d\n",sI);
	return 0;
	}
	
