#include <stdio.h>

int main()
{
	int C, D, temp;
	printf("Enter the value of C: ");
	scanf("%d", &C);
	printf("Enter the value of D: ");
	scanf("%d", &D);
	temp = C;
	C = D;
	D = temp;
	printf("C = %d D = %d\n", C, D);
	return 0;
}