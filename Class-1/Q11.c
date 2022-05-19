#include <stdio.h>

int main()
{
	int amount, n100, n50, n10;
	printf("Enter the amount to be withdraw: ");
	scanf("%d", &amount);
	n100 = amount / 100;
	amount %= 100;
	n50 = amount / 50;
	amount %= 50;
	n10 = amount / 10;
	printf("The cashiar will give:\nHundred notes = %d\nFifty notes = %d\nTen notes = %d", n100, n50, n10);
	return 0;
}