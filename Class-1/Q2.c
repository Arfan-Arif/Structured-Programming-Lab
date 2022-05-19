#include <stdio.h>

int main()
{
	float km;
	printf("Enter distance from Mirpur to Ashulia: ");
	scanf("%f", &km);
	printf("\nMirpur to Ashulia: %.2f m\n", km *1000);	//1 km = 1000 m
	printf("Mirpur to Ashulia: %.2f ft\n", km *3280.8399);	//1 km = 3280.8399 ft
	printf("Mirpur to Ashulia: %.2f in\n", km *39370.078);	//1 km = 39370.078 in
	printf("Mirpur to Ashulia: %.2f cm\n", km *100000);	//1 km = 100000 cm
	return 0;
}