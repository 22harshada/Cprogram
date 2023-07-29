#include<stdio.h>
int main()
{
	int a,b,c,max=0;
	printf("Enter the Number a :- ");
	scanf("%d",&a);
	printf("Enter the Number b :- ");
	scanf("%d",&b);
	printf("Enter the number c :- ");
	scanf("%d", &c);
	
	if (a>b && a>c)
	{
	max=a;
	printf("The A is Maximum!\n");
	}
	else if(b>c)
	{
	max=b;
	printf("The B is Maximum!\n");
	}
	else 
	{
	max=c;
	printf("The C is Maximum!\n");
	}
	 printf("The Maximum Number is :- %d\n", max);
	 
	 return 0;
} 
	
	
