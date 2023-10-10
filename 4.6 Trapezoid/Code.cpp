#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	float sideA, sideB, height;
	puts("Trapezoid Area Calculator");
	puts("Enter side A, side B and it's Height separated by a space:");
	scanf_s("%f %f %f", &sideA, &sideB, &height);
	float area = ((sideA + sideB) * height) / 2;
	printf("The area of the Trapezoid is %.2f", area);

	return 0;
}