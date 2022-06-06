#include <stdio.h>

int main()
{
	int a[5] = { 21, 5, 11, 9, 18 };
	int max = a[0];
	for (int i = 0; i < 5; i++) printf("%d ", a[i]);
	for (int i = 1; i < 5; i++)
	{
		if (max < a[i]) max = a[i];
	}
	printf("\nMax number: %d\n", max);
	return 0;
}