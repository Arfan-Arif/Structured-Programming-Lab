#include <stdio.h>

int main()
{
	int total_sell, total_profit;
	printf("Enter the total selling price of 15 items: ");
	scanf("%d", &total_sell);
	printf("Enter the total profit of 15 items: ");
	scanf("%d", &total_profit);
	printf("Cost per item: %.2f\n", (total_sell - total_profit) / 15.0);
	return 0;
}