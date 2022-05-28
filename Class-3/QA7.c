#include <stdio.h>

int main()
{
	int row;
	printf("Enter a number to define the rows: ");
	scanf("%d", &row);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (j == i - 1) printf("*\n");
			else printf("* ");
		}
	}
	return 0;
}