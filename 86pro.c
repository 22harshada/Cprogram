#include <stdio.h>

int main() {
    int num1, num2, num3;
    int max, secondMax;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    max = num1;
    if (num2 > max)
        max = num2;
    if (num3 > max)
        max = num3;

    if (num1 == max) {
        if (num2 > num3)
            secondMax = num2;
        else
            secondMax = num3;
    }
    else if (num2 == max) {
        if (num1 > num3)
            secondMax = num1;
        else
            secondMax = num3;
    }
    else {
        if (num1 > num2)
            secondMax = num1;
        else
            secondMax = num2;
    }

    printf("The second maximum number is: %d\n", secondMax);

    return 0;
}

