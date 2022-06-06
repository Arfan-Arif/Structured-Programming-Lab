#include <stdio.h>
#include <string.h>

int main()
{
	int arr[5];
	printf("Enter 5 elements of an array: ");
	for (int i = 0; i < 5; i++) scanf("%d", &arr[i]);
	printf("Displaying array in reverse order: ");
	for (int i = 4; i >= 0; i--) printf("%d ", arr[i]);
	return 0;
}