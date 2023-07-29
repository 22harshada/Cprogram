#include<stdio.h>

int main()
{
	int x,y,numBooks,pen,numPens;
	pen= 5;
	printf("Enter your budget in Rs: ");
	scanf("%d", &x);
	printf("Enter the cost of each book in Rs: ");
	scanf("%d", &y);
	numBooks = (x / y);
	printf("You can buy  %d books\n", numBooks);
	numBooks=(x%y);
	numPens=(numBooks/pen);
	printf("You can buy  %d pens\n", numPens);
	return 0;
}
