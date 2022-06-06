#include <stdio.h>

int main()
{
	int n, pos;
	printf("Enter array size: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter array elements: ");
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
	printf("Odd numbers in this array: ");
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 1) printf("%d ", arr[i]);
	}
	return 0;
}