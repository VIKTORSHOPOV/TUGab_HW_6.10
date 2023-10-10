#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int dogPackets, catPackets;
	puts("Expenses for food purchases calculator");
	printf("Enter how many packets of Dog and Cat food will be bough separated by space: ");
	scanf_s("%d %d", &dogPackets, &catPackets);
	puts("-------------------------------------------");

	printf("Total = %.2f", dogPackets * 2.5 + catPackets * 4);



	return 0;
}