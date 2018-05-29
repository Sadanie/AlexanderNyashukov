#include <stdio.h>
#include <locale.h>
#include "funk.h"

int main(int argc, char *argv) {
	setlocale(LC_CTYPE, "rus");

	float x = 0, y = 0, result = 0;
	_Bool b = 1;
	int s;

	while (1) {
		printf("1. Задание 1\n");
		printf("2. Задание 2\n");
		printf("3. Выход\n");
		printf("Выберите пункт меню: ");
		scanf_s("%d", &s);
		if (s == 3)
			return 0;
		switch (s) {
		case 1:
			printf("Выполнение задания 1\n");
			printf("Введите x: ");
			scanf_s("%f", &x);
			printf("Введите y: ");
			scanf_s("%f", &y);
			if (select(x, y) == b) {
				printf("Точка находится в заданной области\n\n");
			}
			else {
				printf("Точка не находится в заданной области\n\n");
			}
			break;
		case 2:
			printf("Выполнение задания 2\n");
			printf("Введите x: ");
			scanf_s("%f", &x);
			result = f(x);

			if (x >= 0)
				printf("Выражение 1\n %f\n\n", result);
			else
				printf("Выражение 2\n %f\n\n", result);
			break;
		default:
			printf("Не верный ввод\n\n");
			break;
		}
	}
	system("pause");
	return 0;
}