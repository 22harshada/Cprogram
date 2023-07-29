#include<stdio.h>
int main()
{
	int side,lsaCube, tsaCube;
	printf("Enter the side of Cube :- ");
	scanf("%d", &side);
	lsaCube= (4*(side*side));
	tsaCube= (6*(side*side));
	printf("Lateral surface Area of Cube :- %d\n", lsaCube);
	printf("Total Surface Area of Cube :- %d\n", tsaCube);
	return 0;

}	
	
