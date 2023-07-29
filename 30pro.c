#include <stdio.h>
#include <math.h>
int main() 
{
	double T, l;
	printf("Enter the time period of the simple pendulum (T): ");
	scanf("%lf", &T);
	printf("Enter the effective length of the simple pendulum (l): ");
	scanf("%lf", &l);
	double g = 4 * pow(3.1416, 2) * l / pow(T, 2);
	printf("The acceleration due to gravity (g) is: %.2lf\n", g);
	return 0;
}
