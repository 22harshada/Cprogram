#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;
    int maxNumber, maxCount = 0;
    
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    
    if (num1 == num2 || num1 == num3 || num1 == num4 || num1 == num5) {
        int count = 0;
        if (num2 == num1){
         count++;
         }
        if (num3 == num1){
         count++;
        }
        if (num4 == num1){ count++;}
        if (num5 == num1){ count++;}
        
        if (count > maxCount) {
            maxNumber = num1;
            maxCount = count;
        }
    }
    
    if (num2 == num1 || num2 == num3 || num2 == num4 || num2 == num5) {
        int count = 0;
        if (num1 == num2) count++;
        if (num3 == num2) count++;
        if (num4 == num2) count++;
        if (num5 == num2) count++;
        
        if (count > maxCount) {
            maxNumber = num2;
            maxCount = count;
        }
    }
    
 
    if (num3 == num1 || num3 == num2 || num3 == num4 || num3 == num5) {
        int count = 0;
        if (num1 == num3) count++;
        if (num2 == num3) count++;
        if (num4 == num3) count++;
        if (num5 == num3) count++;
        
        if (count > maxCount) {
            maxNumber = num3;
            maxCount = count;
        }
    }
    
   
    if (num4 == num1 || num4 == num2 || num4 == num3 || num4 == num5) {
        int count = 0;
        if (num1 == num4) count++;
        if (num2 == num4) count++;
        if (num3 == num4) count++;
        if (num5 == num4) count++;
        
        if (count > maxCount) {
            maxNumber = num4;
            maxCount = count;
        }
    }
    
    
    if (num5 == num1 || num5 == num2 || num5 == num3 || num5 == num4) {
        int count = 0;
        if (num1 == num5) count++;
        if (num2 == num5) count++;
        if (num3 == num5) count++;
        if (num4 == num5) count++;
        
        if (count > maxCount) {
            maxNumber = num5;
            maxCount = count;
        }
    }
    
    printf("The maximum occurring number is: %d\n", maxNumber);
    
    return 0;
}

