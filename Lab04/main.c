#include <stdio.h>
#include <locale.h>
#include "funk.h"

int main(int args, char *argv) {
	setlocale(LC_CTYPE, "rus"); 
	int s = 0;
	while (1) {
		printf("1. incrementStackVariable()\n");
		printf("2. incrementHeapVariable()\n");
		printf("3. sortStackArray\n");
		printf("4. sortHeapArray\n");
		printf("5. �����\n");
		printf("�������� ����� ����: ");
		scanf_s("%d", &s);
		if (s == 5)
			return 0;
		switch (s) {
		case 1:
			incrementStackVariable();
			break;
		case 2:
			incrementHeapVariable();
			break;
		case 3:
			sortStackArray();
			break;
		case 4:
			sortHeapArray();
			break;
		default:
			printf("�� ������ ����\n\n");
			break;
		}
	}
	system("pause");
	return 0;
}