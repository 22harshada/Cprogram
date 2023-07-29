#include<stdio.h>
int main()
{
	int classesHeld, classesAttend;
	double attendancePercentage;
	printf("Enter the Number of Classes Held :- ");
	scanf("%d",&classesHeld);
	printf("Enter the Number of Classes Attend :- ");
	scanf("%d", &classesAttend);
	
	attendancePercentage=(double)classesAttend/classesHeld*100;
	
	if (attendancePercentage>=75)
	{
	printf("You are Eligible to sit in the Exam!\n");
	}
	else
	{
	printf("You are Not Eligible to sit in the Exam!\n");
	}
	return 0;
}	
	
	
