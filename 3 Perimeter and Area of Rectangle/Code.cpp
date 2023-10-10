#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	puts("Rectangle Area and Perimeter calculator!");
	puts("Enter two numbers separated by a space:");
	float sideA, sideB;
	scanf_s("%f %f", &sideA, &sideB);
	puts("--------------------------------------------");
	printf("Perimeter = %.2f\n", (sideA + sideB) * 2);
	printf("Area = %.2f\n", sideA * sideB);


	return 0;
}