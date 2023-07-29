#include<stdio.h>
int main()
{
	float h,m,e,s,cs;
	printf("Hindi ");
	scanf("%f", &h);
	printf("Mathematics");
	scanf(" %f", &m);
	printf("English");
	scanf("%f", &e);
	printf("Science");
	scanf("%f", &s);
	printf("Computer");
	scanf("%f", &cs);
	float sum= h+m+e+s+cs;
	float per= ((sum/500)*100);
	printf("Percentage of a Student :- %0.2f\n ", per);
	return 0;
}	
	
	
