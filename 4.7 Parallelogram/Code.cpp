#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	float side, height;
	puts("Parallelogram Area calculator");
	puts("Enter a side and a height of the parallelogram separated by a space:");
	scanf_s("%f %f", &side, &height);
	float area = side * height;
	printf("The area of the parallelogram is %.2f", area);

	return 0;
}