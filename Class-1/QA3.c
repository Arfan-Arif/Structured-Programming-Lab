#include <stdio.h>

int main()
{

	int marks, aggregate = 0;
	printf("Enter the number of\n");
	for (int i = 1; i <= 5; i++)
	{
		printf("Subject %d: ", i);
		scanf("%d", &marks);
		aggregate += marks;
	}
	printf("Aggregate marks = %d\n", aggregate);
	printf("Percentage marks = %.2f%\n", aggregate / 5.0);
	return 0;
}
