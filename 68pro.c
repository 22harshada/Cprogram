//1feet= 12 inches.
#include<stdio.h>
int main()
{
	float height;
	printf("Enter the Childrens Height in Inches :-");
	scanf("%f",&height);
	
	if (height >= 60)
	{
	printf("Congratulation! he/she will be allow to ride .\n");
	}
	else
	{
	printf("Sorry ! he/she will not be allow to ride.\n");
	}
	return 0;
}	 
