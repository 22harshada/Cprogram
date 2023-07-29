#include<stdio.h>
int main()
{
	int h,w,dailyWages;
	printf("Enter working Hours:- ");
	scanf("%d",&h);
	printf("Enter wages rate:- ");
	scanf("%d", &w);
	dailyWages= h*w;
	printf("Daily wages of worker:- " );
	printf("%d\n", dailyWages);
	return 0;
	}
