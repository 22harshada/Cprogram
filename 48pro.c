#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,sumS1,sumS2;
	printf("----Student S1----\n ");
	printf("Enter the marks of m1 :-" );
	scanf("%d",&m1);
	printf("Enter the marks of m2 :-");
	scanf("%d",&m2);
	printf("Enter the marks of m3 :-" );
	scanf("%d",&m3);
	printf("Enter the marks of m4 :-" );
	scanf("%d",&m4);
	printf("Enter the marks of m5 :-" );
	scanf("%d",&m5);
	sumS1= (m1+m2+m3+m4+m5);
	
	printf("----Student S2---- \n");
	printf("Enter the marks of m1 :-" );
	scanf("%d",&m1);
	printf("Enter the marks of m2 :-");
	scanf("%d",&m2);
	printf("Enter the marks of m3 :-" );
	scanf("%d",&m3);
	printf("Enter the marks of m4 :-" );
	scanf("%d",&m4);
	printf("Enter the marks of m5 :-" );
	scanf("%d",&m5);
	sumS2= (m1+m2+m3+m4+m5);
	printf("sum of Student one is S1:-%d\n", sumS1);
	printf("sum of Student two is S2:-%d\n", sumS2);
	
	if(sumS1>sumS2)
	{
	printf("----Student one S1 is Topper----\n");
	}
	else
	{
	printf("----Student Two S2 is Topper----\n");
	}
	
	return 0;
}	
	
