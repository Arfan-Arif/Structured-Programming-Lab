#include <stdio.h>
#include <ctype.h>

int main()
{
	char c;
	printf("Enter any single letter, digit or special symbol: ");
	scanf("%c", &c);
	if (isupper(c))
		printf("\nYou entered a capital letter.\n");
	else if (islower(c))
		printf("\nYou entered a small letter.\n");
	else if (isdigit(c))
		printf("\nYou entered a digit.\n");
	else
		printf("\nYou entered a special symbol.\n");
	return 0;
}