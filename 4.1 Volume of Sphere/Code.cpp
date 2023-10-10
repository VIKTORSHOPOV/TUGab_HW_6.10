#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	puts("Sphere Volume calculator!");
	puts("Enter Radius of a sphere:");
	float radius;
	scanf_s("%f", &radius);
	float sphere_Volume = (4 * 3.14 * pow(radius, 3)) / 3;
	printf("The Volume of a Sphere with Radius %.2f = %.2f", radius, sphere_Volume);



	return 0;
}