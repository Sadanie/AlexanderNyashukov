/*
#include <stdio.h>
#include <math.h>
#include <locale.h>

void f(void);

float x = 5;
float y = 8.2537;
float result;

int main(int argc, char *argv) {
	setlocale(LC_CTYPE, "rus");
	
	f();

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);
	printf("f(x,y) = %.4f\n", result);

	printf("¬ведите x: ");
	scanf_s("%f", &x);
	printf("¬ведите y: ");
	scanf_s("%f", &y);
	
	f();

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);
	printf("f(x,y) = %.4f\n", result);

	system("pause");
	return 0;
}

void f(void) {
	result = (sin(x) + cos(2 * y - x)) / (cos(x) - sin(2 * y - x));
} */