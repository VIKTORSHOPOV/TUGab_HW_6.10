#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	float sideA, sideB;
	puts("Area of a Rectangle");
	puts("Enter the two sides of the rectangle separated by a space:");
	scanf_s("%f %f", &sideA, &sideB);
	printf("The Area of the Rectangle is %.2f", sideA * sideB);


	return 0;
}