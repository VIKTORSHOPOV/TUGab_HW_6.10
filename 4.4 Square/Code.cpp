#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	float side;
	puts("Area of a Square");
	puts("Enter the side of the Square:");
	scanf_s("%f", &side);
	printf("The area of the Square is %.2f", pow(side, 2));

	return 0;
}