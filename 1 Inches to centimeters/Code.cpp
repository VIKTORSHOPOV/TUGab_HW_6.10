#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	puts("Enter inches:");
	float inches;
	scanf_s("%f", &inches);
	float cm = inches * 2.54;
	puts("-------------");
	printf("%.2f inches = %.2f cm.", inches, cm);

	return 0;
}