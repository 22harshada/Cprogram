#include <stdio.h>

int main() {
    int amount, totalNotes = 0;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    if (amount >= 2000) {
        totalNotes += amount / 2000;
        amount %= 2000;
    }
    if (amount >= 500) {
        totalNotes += amount / 500;
        amount %= 500;
    }
    if (amount >= 200) {
        totalNotes += amount / 200;
        amount %= 200;
    }
    if (amount >= 100) {
        totalNotes += amount / 100;
        amount %= 100;
    }
    if (amount >= 20) {
        totalNotes += amount / 20;
        amount %= 20;
    }
    if (amount >= 10) {
        totalNotes += amount / 10;
        amount %= 10;
    }
    if (amount >= 5) {
        totalNotes += amount / 5;
        amount %= 5;
    }
    if (amount >= 2) {
        totalNotes += amount / 2;
        amount %= 2;
    }
    if (amount >= 1) {
        totalNotes += amount;
    }

    printf("Minimum number of notes required: %d\n", totalNotes);

    return 0;
}

