#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	float math, bg, en, phy, circusPrice, allowance;
	puts("Enter the prices of the books.");
	printf("Math book: ");
	scanf_s("%f", &math);
	printf("Bulgarian book: ");
	scanf_s("%f", &bg);
	printf("English book: ");
	scanf_s("%f", &en);
	printf("Physics book: ");
	scanf_s("%f", &phy);
	printf("Enter the allowance given to Lili by her parents: ");
	scanf_s("%f", &allowance);
	printf("Enter the price of the circus ticket: ");
	scanf_s("%f", &circusPrice);
	puts("--------------------------------------------------");
	float sum = math + bg + en + phy;
	if (allowance >= sum + circusPrice)
	{
		printf("Lili can afford to buy books and go to the circus :D. She has %.2f$ left.", allowance - (sum + circusPrice));
	}
	else {
		printf("Lili can't afford to buy books and go to the circus :(. She needs %.2f$ more.", abs(allowance - sum + circusPrice));
	}

	return 0;
}