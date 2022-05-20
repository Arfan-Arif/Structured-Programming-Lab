#include <stdio.h>

int main()
{
	int x1, y1, x2, y2, x3, y3, slope1, slope2;
	printf("Enter the values of three points:");
	printf("\n(x1,y1): ");
	scanf("%d%d", &x1, &y1);
	printf("\n(x2,y2): ");
	scanf("%d%d", &x2, &y2);
	printf("\n(x3,y3): ");
	scanf("%d%d", &x3, &y3);
	slope1 = (y2 - y1) / (x2 - x1);
	slope2 = (y3 - y2) / (x3 - x2);
	if (slope1 == slope2)
		printf("\nAll three points fall on one straight line.\n");
	else
		printf("\nThese three points do not fall on one straight line.\n");
	return 0;
}