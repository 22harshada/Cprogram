#include<stdio.h>
int main()
{
	int D,M,Y,maxDay;
	printf("Enter the Date :- ");
	scanf("%d", &D);
	printf("Enter the Month :- ");
	scanf("%d", &M);
	printf("Enter the Year :- ");
	scanf("%d", &Y);
	
	if(D>0 && D<=31 && M>0 && M<=12)
	{ 
      if(M==2)
	{
	if((Y%4==0 && Y%100 != 0) || Y%400==0)
	maxDay= 29;
	else
	maxDay =28;
	}
	else if(M == 4 || M == 6|| M ==9 || M ==11)	
	{
	maxDay= 31;
	}
	else 
	{
	maxDay= 30;
	}
	  if (D >= 1 && D <= maxDay)
         {
          printf("The date is valid.\n");
        }
         else 
         {
            printf("The day is invalid.\n");
        }
    }
    else {
        printf("The month or year is invalid.\n");
}
    return 0;		
}	

