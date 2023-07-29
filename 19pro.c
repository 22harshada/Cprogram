#include<stdio.h>
int main()
{
	int h,l,w,vCuboid;
	printf("Enter the Height of Cuboid :- ");
	scanf("%d", &h);
	printf("Enter the length of Cuboid :- ");
	scanf("%d", &l);
	printf("Enter the width of Cuboid :- ");
	scanf("%d", &w);
	vCuboid= (h*l*w);
	printf("Volume of Cuboid :- %d\n", vCuboid);
	return 0;
}
	
