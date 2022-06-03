#include <stdio.h>

int main()
{
	char opt;
	int a, b;
	printf("Enter operation: ");
	scanf("%c", &opt);
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("Enter the value of b: ");
	scanf("%d", &b);
	switch (opt)
	{
		case '+':
			printf("%d\n", a + b);
			break;

		case '-':
			printf("%d\n", a - b);
			break;

		case '*':
			printf("%d\n", a *b);
			break;

		case '/':
			printf("%d\n", a / b);
			break;

		default:
			printf("Invalid operation.\n");
			break;
	}
	return 0;
}