#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	float side, height;
	puts("Area of a Trinagle /\\");
	puts("Enter the side of the Triangle and its Height seperated by a space:");
	scanf_s("%f %f", &side, &height);
	float area = (side * height) / 2;
	printf("The area of the Triangle is %.2f", area);

	return 0;
}