#include <iostream>
#include <stdio.h>
#include <math.h>

int main() {
	int choice;
	float result;

	do {

		puts("Choose an expression to solve (1-6), or enter 0 to exit:");
		puts("1. sqrt(x^2 - 6x + 9)");
		puts("2. (sqrt(b) - sqrt(5))*(sqrt(b) + sqrt(5))");
		puts("3. sqrt((2a - b)/(a + b)) - sqrt(a^2 - b^2)");
		puts("4. sqrt(2x/(y + 9)) + sqrt((x - y)/(2x))");
		puts("5. (x - k)/(4xk) + 1/2k");
		puts("6. a/(a^2 + b^2) + b/2a");


		scanf_s("%d", &choice);

		switch (choice) {
		case 0:

			break;

		case 1:
			printf("Enter value for X: ");
			float x;
			scanf_s("%f", &x);
			result = sqrt(pow(x, 2) - 6 * x + 9);
			printf("Result = %.2f\n", result);
			break;

		case 2:
			printf("Enter value for B: ");
			float b;
			scanf_s("%f", &b);
			result = (sqrt(b) - sqrt(5)) * (sqrt(b) + sqrt(5));
			printf("Result = %.2f\n", result);
			break;

		case 3:
			printf("Enter values for A and B separated by a space: ");
			float A, B;
			scanf_s("%f %f", &A, &B);
			result = sqrt((2 * A - B) / (A + B)) - sqrt(pow(A, 2) - pow(B, 2));
			printf("Result = %.2f\n", result);
			break;

		case 4:
			printf("Enter values for X and Y separated by a space: ");
			float X, Y;
			scanf_s("%f %f", &X, &Y);
			result = sqrt((2 * X) / (Y + 9)) + sqrt((X - Y) / (2 * X));
			printf("Result = %.2f\n", result);
			break;

		case 5:
			printf("Enter values for X and K separated by a space: ");
			float x2, k;
			scanf_s("%f %f", &x2, &k);
			result = (x2 - k) / (4 * x2 * k) + 1 / (2 * k);
			printf("Result = %.2f\n", result);
			break;

		case 6:
			printf("Enter values for A and B separated by a space: ");
			float a2, b2;
			scanf_s("%f %f", &a2, &b2);
			result = a2 / (pow(a2, 2) + pow(b2, 2)) + b2 / (2 * a2);
			printf("Result = %.2f\n", result);
			break;

		default:
			printf("Invalid choice. Please select a number between 0 and 6.\n");
			break;
		}


		puts("\n---------------------------------------------\n");

	} while (choice != 0);

	return 0;
}
