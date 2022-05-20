#include <stdio.h>
#include <string.h>

int main()
{
	char num[20];
	printf("Enter the number to reverse: ");
	scanf("%s", &num);
	printf("The reversed number is: ");
	int c = 1;
	for (int i = strlen(num) - 1; i >= 0; i--)
	{
		printf("%c", num[i]);
		if (num[i] != num[strlen(num) - i - 1])
			c = 0;
	}
	if (c == 1)
		printf("\nNumbers are equal.\n");
	else
		printf("\nNumbers are not equal.\n");
	return 0;
}