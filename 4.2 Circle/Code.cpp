#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	puts("Circumference of a circle.");
	puts("Enter radius of the circle:");
	float radius;
	scanf_s("%f", &radius);
	float circumference = 2 * 3.14 * pow(radius, 2);
	printf("The circumference of the circle is %.2f\n", circumference);
	puts("");
	float area = 3.14 * pow(radius, 2);
	printf("Area of the circle is %.2f", area);

	return 0;
}