#include<stdio.h>
int main()
{
	int phy,chem,bio,math,com;
	float percentage;
	
	printf("Enter the Physics Marks :- ");
	scanf("%d", &phy);
	printf("Enter the Chemistry Marks :- ");
	scanf("%d", &chem);
	printf("Enter the Biology Marks :- ");
	scanf("%d", &bio);
	printf("Enter the Mathematics Marks :- ");
	scanf("%d", &math);
	printf("Enter the Computer Marks :- ");
	scanf("%d", &com);
	
	float sum= (phy+chem+bio+math+com);
	percentage =((sum/500.0)*100);
	printf("Percentage of Student :- %0.2f\n", percentage);
	
	if(percentage >= 90)
	{
	printf(" Grade A \n");
	}
	else if(percentage >= 80)
	{
	printf(" Grade B \n");
	}
	else if (percentage >= 70)
	{
	printf(" Grade C \n");
	}
	else if (percentage >= 60)
	{
	printf(" Grade D\n");
	}
	else if (percentage >= 50)
	{
	printf(" Grade E \n");
	}
	else if (percentage >= 40)
	{
	printf(" Grade F \n");
	}
	return 0;
}	
