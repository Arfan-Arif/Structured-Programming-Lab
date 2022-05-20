#include <stdio.h>

int main()
{
	float basic_s, d_allowance, h_rent, gross_s;
	printf("Enter Niloy's basic salary: ");
	scanf("%f", &basic_s);
	d_allowance = 0.4 * basic_s;
	h_rent = 0.2 * basic_s;
	gross_s = basic_s - d_allowance - h_rent;
	printf("\nGross salary of Niloy : %.2f tk\n", gross_s);
	return 0;
}
