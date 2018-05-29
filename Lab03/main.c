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
			printf("%d. ������� %d\n",i,i);
		}
		printf("6. �����\n");
		printf("�������� ����� ����: ");
		scanf_s("%d", &s);
		if (s == 6)
			return 0;
		switch (s) {
		case 1:
			printf("���������� ������� 1\n");
			printf("������� n: ");
			scanf_s("%d", &n);
			printf("���������: %f\n\n", summ(n));
			break;
		case 2:
			printf("���������� ������� 2\n");
			printf("������� eps: ");
			scanf_s("%f", &eps);
			printf("���������: %f\n\n", summ2(eps));
			break;
		case 3:
			printf("���������� ������� 3\n");
			printf("������� n: ");
			scanf_s("%d", &n);
			printf("������� k: ");
			scanf_s("%d", &k);
			print(n, k);
			break;
		case 4:
			printf("���������� ������� 4\n");
			printf("������� eps: ");
			scanf_s("%f", &eps);
			printf("���������: %f\n\n", findFirstElement(eps));
			break;
		case 5:
			printf("���������� ������� 5\n");
			printf("������� eps: ");
			scanf_s("%f", &eps);
			printf("���������: %f\n\n", findFirstNegativeElement(eps));
			break;
		default:
			printf("�� ������ ����\n\n");
			break;
		}
	}
	system("pause");
	return 0;
}