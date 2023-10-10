#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	float vPrice, vKg, fPrice, fKg;
	puts("Vegetable Shop");
	printf("Enter Price and Weight for Vegetables separated by a space: ");
	scanf_s("%f %f", &vPrice, &vKg);
	printf("Enter Price and Weight for Fruits separated by a space: ");
	scanf_s("%f %f", &fPrice, &fKg);
	puts("-----------------------------------------------------------------\n");
	printf("Income -> %.2f$", (vPrice * vKg + fPrice * fKg) * 0.54);

	return 0;
}