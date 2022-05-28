#include <stdio.h>

int main()
{
	int num;
	float sum = 0;
	printf("Enter the number of terms: ");
	scanf("%d", &num);
	for (float i = 1; i <= num; i++)
	{
		int fact = 1;
		for (int j = 1; j <= i; j++)
			fact *= j;
		sum += i / fact;
	}
	printf("%.4f\n", sum);
	return 0;
}