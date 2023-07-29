#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter Values:-");
	scanf("%d%d", &a,&b);
	a=b-a;
	b=a-b;
	printf("Swap Values of a:- ");
	printf("%d\n", a);
	printf("Swap Values of b:- ");
	printf("%d\n", b);
	return 0;
	
}

