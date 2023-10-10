#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	float x, y;
	puts("                 / lg(x) + 1.82 ,      x >= 1");
	puts("Solving for y = |");
	puts("                 \\ x^2 + 7x + 8.82,    x < 1");
	puts("\n---------------------------------------------------");

	printf("Enter value for X: ");
	scanf_s("%f", &x);

	if (x >= 1)
	{
		y = log10(x) + 1.82;
	}
	else
	{
		y = pow(x, 2) + 7 * x + 8.82;
	}

	printf("Results = %.2f", y);

	return 0;
}