#include <stdio.h>

int main()
{
	float marks;
	printf("Enter your marks: ");
	scanf("%f", &marks);
	if (marks < 40)
		printf("\nYou failed\n");
	else if (marks < 45)
		printf("\nYou got C-\n");
	else if (marks < 50)
		printf("\nYou got C\n");
	else if (marks < 55)
		printf("\nYou got C+\n");
	else if (marks < 60)
		printf("\nYou got B-\n");
	else if (marks < 65)
		printf("\nYou got B\n");
	else if (marks < 70)
		printf("\nYou got B+\n");
	else if (marks < 75)
		printf("\nYou got A-\n");
	else if (marks < 80)
		printf("\nYou got A\n");
	else
		printf("\nYou got A+\n");
	return 0;
}