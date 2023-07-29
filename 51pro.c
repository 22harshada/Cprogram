#include <stdio.h>
int main() 
{
 
    float temperature;
    printf("Enter the temperature in degrees Celsius:-\n");
    scanf("%f", &temperature);
    

    if (temperature >= 100.0) 
    {
        printf("The water is boiling.\n");
    } 
    else 
    {
        printf("The water is not boiling.\n");
    }
    return 0;
    }
