#include "funk.h"
#include <conio.h>
#include <stdio.h>

void increment(int *n) {
	if (n != NULL) {
		printf("Адрес равняется: %p\nЗначение переменной равняется: %d\n", &n, *n);
		(*n)++;
		printf("Адрес равняется: %p\nЗначение переменной равняется: %d\n", &n, *n);
	}
	else {
		printf("Пустой указатель");
	}
}
void incrementStackVariable() {
	int n;
	printf("Введите целое число: ");
	scanf_s("%d", &n);
	printf("Адрес равняется: %p\nЗначение переменной равняется: %d\n", &n, n);
	increment(&n);
	printf("\n");
}
void incrementHeapVariable() {
	int *n = (int *)malloc(sizeof(int));
	printf("Введите целое число: ");
	scanf_s("%d", n);
	printf("Адрес равняется: %p\nЗначение переменной равняется: %d\n", &n, *n);
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
		printf("Введите %d элемент массива: ", i);
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

	printf("Количество элементов в массиве: %d\n", n);
	readArray(arr, n);
	printf("Введенный массив:\n");
	writeArray(arr, n);
	printf("Сортированный массив:\n");
	sort(arr, n);
	writeArray(arr, n);
	printf("\n");
}
void sortHeapArray() {
	int n = 0;
	printf("Введите количество элементов: ");
	scanf_s("%d", &n);
	int *arr = (int *)malloc(n * sizeof(int));
	
	printf("Количество элементов в массиве: %d\n", n);
	readArray(arr, n);
	printf("Введенный массив:\n");
	writeArray(arr, n);
	printf("Сортированный массив:\n");
	sort(arr, n);
	writeArray(arr, n);
	printf("\n");
}