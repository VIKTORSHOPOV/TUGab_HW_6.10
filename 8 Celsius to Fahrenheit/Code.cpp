#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	float C;
	puts("Celsius to Fahrenheit (C to F)");
	printf("Enter value in C: ");
	scanf_s("%f", &C);
	puts("-------------------------------");
	printf("%.2f C = %.2f F", C, C * 1.8 + 32);

	return 0;
}