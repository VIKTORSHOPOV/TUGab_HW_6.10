#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	puts("Enter Leva:");
	float leva;
	scanf_s("%f", &leva);
	puts("------------------------");
	float euro = leva * .51;
	printf("%.2f Leva = %.2f Euro.\n", leva, euro);


	return 0;
}