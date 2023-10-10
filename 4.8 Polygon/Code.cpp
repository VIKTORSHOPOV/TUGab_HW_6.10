#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	float apothem, side, n;
	puts("Polygon Area calculator");
	puts("Enter the apothem, side lenght and the number of sides of the polygon separated by a space:");
	scanf_s("%f %f %f", &apothem, &side, &n);
	float area = .5 * n * side * apothem;
	printf("The area of the %.0f sided Polygon is %.2f", n, area);


	return 0;
}