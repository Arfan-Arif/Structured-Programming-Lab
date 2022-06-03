#include <stdio.h>
#include <math.h>

int main()
{
	int opt, num, fact = 1, flag = 1;
	printf("1. Odd/Even\n");
	printf("2. Factorial\n");
	printf("3. Prime\n");
	printf("4. Exit\n");
	printf("Enter any option: ");
	scanf("%d", &opt);
	switch (opt)
	{
		case 1:
			printf("Enter a number: ");
			scanf("%d", &num);
			for (int i = 1; i <= num; i++) fact *= i;
			printf("Factorial of %d is: %d\n", num, fact);
			break;

		case 2:
			printf("Enter a number: ");
			scanf("%d", &num);
			if (num % 2 == 0 && num != 2 || num == 1) flag = 0;
			else
			{
				for (int i = 3; i <= sqrt(num); i += 2)
				{
					if (num % i == 0)
					{
						flag = 0;
						break;
					}
				}
			}
			if (flag)
				printf("%d is a prime number.", num);
			else
				printf("%d is not a prime number.", num);
			break;

		case 3:
			printf("Enter a number: ");
			scanf("%d", &num);
			if (num % 2 == 0) printf("Even number\n");
			else printf("Odd number\n");
			break;

		case 4:
			printf("Exiting...\n");
			break;

		default:
			printf("Invalid option\n");
			break;
	}
	return 0;
}
