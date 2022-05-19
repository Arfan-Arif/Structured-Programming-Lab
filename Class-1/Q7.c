#include <stdio.h>

int main()
{
	int sum;
	char num[5];
	printf("Enter the 5 digit number: ");
	scanf("%s", &num);
	for (int i = 0; i < 5; i++) sum += num[i] - 48;
	printf("Sum of it's digits: %d\n", sum);
	return 0;
}