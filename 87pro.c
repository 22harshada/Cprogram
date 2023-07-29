#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    int max, secondMax;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    max = num1;
    if (num2 > max)
        max = num2;
    if (num3 > max)
        max = num3;
    if (num4 > max)
        max = num4;

    if (num1 == max) {
        if (num2 >= num3 && num2 >= num4)
            secondMax = num2;
        else if (num3 >= num2 && num3 >= num4)
            secondMax = num3;
        else
            secondMax = num4;
    }
    else if (num2 == max) {
        if (num1 >= num3 && num1 >= num4)
            secondMax = num1;
        else if (num3 >= num1 && num3 >= num4)
            secondMax = num3;
        else
            secondMax = num4;
    }
    else if (num3 == max) {
        if (num1 >= num2 && num1 >= num4)
            secondMax = num1;
        else if (num2 >= num1 && num2 >= num4)
            secondMax = num2;
        else
            secondMax = num4;
    }
    else {
        if (num1 >= num2 && num1 >= num3)
            secondMax = num1;
        else if (num2 >= num1 && num2 >= num3)
            secondMax = num2;
        else
            secondMax = num3;
    }

    printf("The second maximum number is: %d\n", secondMax);

    return 0;
}

