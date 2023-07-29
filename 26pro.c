#include<stdio.h>

int main()
{
	int x,y,numBooks;
	printf("Enter your budget in Rs: ");
	scanf("%d", &x);
	printf("Enter the cost of each book in Rs: ");
	scanf("%d", &y);
	numBooks = (x / y);
	printf("You can buy  %d books\n", numBooks);
	return 0;
}
