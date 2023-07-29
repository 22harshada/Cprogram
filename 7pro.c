#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter Values:-");
	scanf("%d%d", &a,&b);
	c=a;
	a=b;
	b=c;
	printf("Swap Values of a:- ");
	printf("%d\n", a);
	printf("Swap Values of b:- ");
	printf("%d\n", b);
	return 0;
	
}

