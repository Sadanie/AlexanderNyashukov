#include <stdio.h>
#include <locale.h>
#include "funk.h"

int main(int argc, char *argv) {
	setlocale(LC_CTYPE, "rus");

	float x = 0, y = 0, result = 0;
	_Bool b = 1;
	int s;

	while (1) {
		printf("1. ������� 1\n");
		printf("2. ������� 2\n");
		printf("3. �����\n");
		printf("�������� ����� ����: ");
		scanf_s("%d", &s);
		if (s == 3)
			return 0;
		switch (s) {
		case 1:
			printf("���������� ������� 1\n");
			printf("������� x: ");
			scanf_s("%f", &x);
			printf("������� y: ");
			scanf_s("%f", &y);
			if (select(x, y) == b) {
				printf("����� ��������� � �������� �������\n\n");
			}
			else {
				printf("����� �� ��������� � �������� �������\n\n");
			}
			break;
		case 2:
			printf("���������� ������� 2\n");
			printf("������� x: ");
			scanf_s("%f", &x);
			result = f(x);

			if (x >= 0)
				printf("��������� 1\n %f\n\n", result);
			else
				printf("��������� 2\n %f\n\n", result);
			break;
		default:
			printf("�� ������ ����\n\n");
			break;
		}
	}
	system("pause");
	return 0;
}