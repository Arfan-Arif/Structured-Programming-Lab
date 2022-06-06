#include <stdio.h>

int main()
{
	int a[5] = { 21, 5, 11, 9, 18 };
	int min = a[0];
	for (int i = 0; i < 5; i++) printf("%d ", a[i]);
	for (int i = 1; i < 5; i++)
	{
		if (min > a[i]) min = a[i];
	}
	printf("\nMin number: %d\n", min);
	return 0;
}