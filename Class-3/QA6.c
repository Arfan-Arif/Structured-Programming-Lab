#include <stdio.h>

int main()
{
	int n, a = 1, b = 0, s = 0;
	printf("Enter the range of Fibonacci series : ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", s);
		s = a + b;
		a = b;
		b = s;
	}
	return 0;
}