#include <stdio.h>
#define pi 3.14159
int main()
{
	float length, breadth, radius;
	printf("Enter the length: ");
	scanf("%f", &length);
	printf("Enter the breadth: ");
	scanf("%f", &breadth);
	printf("Enter the radius: ");
	scanf("%f", &radius);
	printf("Area of rectangle: %.2f\n", length *breadth);
	printf("Perimeter of rectangle: %.2f\n", 2 *(length + breadth));
	printf("Area of circle: %.2f\n", pi *radius *radius);
	printf("Perimeter of circle: %.2f\n", (2 *pi *radius));
	return 0;
}
