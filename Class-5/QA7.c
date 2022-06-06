#include <stdio.h>

int main()
{
	int n, element;
	printf("Enter array size: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter array elements: ");
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
	printf("Enter element to search: ");
	scanf("%d", &element);
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == element)
		{
			printf("%d found at position %d.\n", element, i + 1);
			return 0;
		}
	}
	printf("%d not found.\n", element);
	return 0;
}