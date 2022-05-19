#include<stdio.h>
int main()
{
	float fahrenheit, celsius;
	printf("Temperature of city in fahrenheit: ");
	scanf("%f",&fahrenheit);
	celsius=(5.0/9.0)*(fahrenheit-32);
	printf("Temperature in centigrade: %.1f C°\n",celsius);
	return 0;
}