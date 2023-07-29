#include<stdio.h>
#include<string.h>
int main()
{
	char city[20];
	printf("Enter the City :- ");
	scanf("%s", city);
	
	if(strcmp(city,"Delhi")==0)
	{
	printf(" Red Fort \n");
	}
	else if(strcmp(city,"Agra")==0)
	{
	printf(" Taj Mahal \n");
	}
	else if(strcmp(city,"Jaipur")==0)
	{
	printf(" Jal Mahal \n");
	}
	
	return 0;
}	
