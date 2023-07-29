#include<stdio.h>
int main()
{
	int h,m,e,s,cs;
	//printf("Enter the Marks of Subject :-");
	printf("Hindi ");
	scanf("%d", &h);
	printf("Mathematics");
	scanf(" %d", &m);
	printf("English");
	scanf("%d", &e);
	printf("Science");
	scanf("%d", &s);
	printf("Computer");
	scanf("%d", &cs);
	int sum= h+m+e+s+cs;
	printf("Total Marks Obtain by a Student :- %d\n", sum);
	return 0;
}	
	
	

