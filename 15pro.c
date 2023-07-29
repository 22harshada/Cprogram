#include <stdio.h>

int main() 
{
    float circumference, diameter;
    const float PI = 3.14159;
    printf("Enter the circumference of the circle: ");
    scanf("%f", &circumference);
    diameter = (circumference / PI);
    printf("The diameter of the circle is: %.2f\n", diameter);
    return 0;
}
