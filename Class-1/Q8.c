#include <stdio.h>

int main()
{
	int sum;
	char num[5];
	printf("Enter the 5 digit number: ");
	scanf("%s", &num);
	printf("Reverse Order: ");
	for (int i = 4; i >= 0; i--) printf("%c", num[i]);
	return 0;
}