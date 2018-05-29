#include "funk.h"
#include <conio.h>
#include <stdio.h>

void increment(int *n) {
	if (n != NULL) {
		printf("����� ���������: %p\n�������� ���������� ���������: %d\n", &n, *n);
		(*n)++;
		printf("����� ���������: %p\n�������� ���������� ���������: %d\n", &n, *n);
	}
	else {
		printf("������ ���������");
	}
}
void incrementStackVariable() {
	int n;
	printf("������� ����� �����: ");
	scanf_s("%d", &n);
	printf("����� ���������: %p\n�������� ���������� ���������: %d\n", &n, n);
	increment(&n);
	printf("\n");
}
void incrementHeapVariable() {
	int *n = (int *)malloc(sizeof(int));
	printf("������� ����� �����: ");
	scanf_s("%d", n);
	printf("����� ���������: %p\n�������� ���������� ���������: %d\n", &n, *n);
	increment(n);
	free(n);
	printf("\n");
}
void writeArray(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		printf("A[%d] = %d\n", i, arr[i]);
	}
}
void readArray(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		printf("������� %d ������� �������: ", i);
		scanf_s("%d", &arr[i]);
	}
}
void sort(int *arr, int n) {
	int temp = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-i-1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void sortStackArray() {
	int arr[10];
	int n = 10;

	printf("���������� ��������� � �������: %d\n", n);
	readArray(arr, n);
	printf("��������� ������:\n");
	writeArray(arr, n);
	printf("������������� ������:\n");
	sort(arr, n);
	writeArray(arr, n);
	printf("\n");
}
void sortHeapArray() {
	int n = 0;
	printf("������� ���������� ���������: ");
	scanf_s("%d", &n);
	int *arr = (int *)malloc(n * sizeof(int));
	
	printf("���������� ��������� � �������: %d\n", n);
	readArray(arr, n);
	printf("��������� ������:\n");
	writeArray(arr, n);
	printf("������������� ������:\n");
	sort(arr, n);
	writeArray(arr, n);
	printf("\n");
}