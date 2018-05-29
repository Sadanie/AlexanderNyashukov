#include "funk.h"
#include <stdio.h>
#include <locale.h>

int main(int argc, char *argv) {
	setlocale(LC_CTYPE, "rus");
	int s, n, k;
	float eps;
	while (1) {
		for (int i = 1; i < 6; i++)
		{
			printf("%d. Задание %d\n",i,i);
		}
		printf("6. Выход\n");
		printf("Выберите пункт меню: ");
		scanf_s("%d", &s);
		if (s == 6)
			return 0;
		switch (s) {
		case 1:
			printf("Выполнение задания 1\n");
			printf("Введите n: ");
			scanf_s("%d", &n);
			printf("Результат: %f\n\n", summ(n));
			break;
		case 2:
			printf("Выполнение задания 2\n");
			printf("Введите eps: ");
			scanf_s("%f", &eps);
			printf("Результат: %f\n\n", summ2(eps));
			break;
		case 3:
			printf("Выполнение задания 3\n");
			printf("Введите n: ");
			scanf_s("%d", &n);
			printf("Введите k: ");
			scanf_s("%d", &k);
			print(n, k);
			break;
		case 4:
			printf("Выполнение задания 4\n");
			printf("Введите eps: ");
			scanf_s("%f", &eps);
			printf("Результат: %f\n\n", findFirstElement(eps));
			break;
		case 5:
			printf("Выполнение задания 5\n");
			printf("Введите eps: ");
			scanf_s("%f", &eps);
			printf("Результат: %f\n\n", findFirstNegativeElement(eps));
			break;
		default:
			printf("Не верный ввод\n\n");
			break;
		}
	}
	system("pause");
	return 0;
}