#include <stdio.h>

int main()
{
	float cost_p, sell_p;
	printf("Enter the cost price of an item: ");
	scanf("%f", &cost_p);
	printf("Enter the selling price of an item: ");
	scanf("%f", &sell_p);
	if (sell_p == cost_p)
		printf("No profit, no loss.\n");
	else if (sell_p > cost_p)
		printf("Profit: %.2f\n", sell_p - cost_p);
	else
		printf("Loss: %.2f\n", cost_p - sell_p);
	return 0;
}