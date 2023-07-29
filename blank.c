#include<stdio.h>
#include<math.h>
int main()
{
int side, volume;
printf("Enter the Side of Cube :- " );
scanf("%d", &side);
volume= (pow(side,3));
printf("Volume of the Cube :- %d\n", volume);
return 0;
}
