#include <stdio.h>

int main()
{
	float ill_men = 80000 * 0.52 - 80000 * 0.35;
	printf("Illeterate Men = %.0f\nIlleterate Women = %.0f", ill_men, 80000 * 0.52 - ill_men);
	return 0;
}