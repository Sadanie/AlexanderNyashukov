#include <iostream>
#include "rational.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int s;
	float nominator, denominator;
	while (true) {
		cout << "1. Ввести дробь" << endl;
		cout << "2. Ввести число" << endl;
		cout << "3. Выход" << endl;
		cin >> s;
		if (s == 3) {
			return 0;
		}
		switch (s) {
		case 1:
			cout << "Введите числитель: "; cin >> nominator; cout << endl;
			cout << "Введите знаменатель: "; cin >> denominator; cout << endl;
			Rational::printRational(Rational::y1(Rational(nominator, denominator)));
			break;
		case 2:
			cout << "Введите число: "; cin >> nominator; cout << endl;
			cout << Rational::y2(nominator);
			break;
		}
	}
	system("pause");
	return 0;
}