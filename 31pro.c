#include <stdio.h>

int main() {
   int no0, no1;
    printf(" Enter the Quantity\n('0' for Vadapaw and '1' for Samosa)\n");
   
    scanf("%d %d", &no0, &no1);

    float vadapavPrice = 12.0, samosaPrice = 15.0;
    float bill;

    bill = (vadapavPrice * no0) + (samosaPrice * no1);
    printf("Final Bill\n");
    printf("-----Item Quantity-----\n");
    printf("Vadapaw Quantity  = %d\n", no0);
    printf("Samosa Quantity  = %d\n", no1);
    printf("---------------------------------------------\n");
    printf("Total Amount -- %.2f\n", bill);

    return 0;
}
