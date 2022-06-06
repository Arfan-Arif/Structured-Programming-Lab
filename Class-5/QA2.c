#include <stdio.h>

int main()
{
	int temp, a[5] = { 21, 5, 11, 9, 18 };
	for (int i = 0; i < 5; i++) printf("%d ", a[i]);
	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (a[i] < a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\nSorted array in descending order:\n");
	for (int i = 0; i < 5; i++) printf("%d ", a[i]);
	return 0;
}