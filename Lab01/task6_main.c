/*
#include <stdio.h>
#include <locale.h>

float x, y, result;
void f(void);

int main(int argc, char *argv) {
	setlocale(LC_CTYPE, "rus");

	f();

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);
	printf("f(x,y) = %.4f\n", result);

	printf("������� x: ");
	scanf_s("%f", &x);
	printf("������� y: ");
	scanf_s("%f", &y);

	f();

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);
	printf("f(x,y) = %.4f\n", result);

	system("pause");
	return 0;
} */