#include <stdio.h>

int main()
{
	int row;
	printf("Enter a number to define the rows: ");
	scanf("%d", &row);
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (j == i) printf("%d\n", j);
			else printf("%d ", j);
		}
	}
	return 0;
}