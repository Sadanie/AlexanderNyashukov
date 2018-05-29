#include "funk.h"
#include <math.h>
#include <stdio.h>

float f(int x) {
	return (pow(-1, x)*((1 + 3 * x) / (pow(3, x))));
}

float summ(int n) {
	float result = 0;

	for (int i = 0; i < n; i++) {
		result += f(i);
	}

	return result;
}

float summ2(float eps) {
	float result = 0;

	for (int i = 0; abs(f(i)) > eps; i++) {
		result += f(i);
	}

	return result;
}

void print(int n, int k) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (i == k*count) {
			count++;
			continue;
		}
		printf("%d: %f\n",i, f(i));
	}
	printf("\n");
}

int findFirstElement(float eps) {
	for (int i = 0; 1; i++) {
		if (abs(f(i)) <= eps)
			return i;
	}
}

int findFirstNegativeElement(float eps) {
	for (int i = 0; 1; i++) {
		if ((f(i)<0) && (abs(f(i)) <= eps))
			return i;
	}
}