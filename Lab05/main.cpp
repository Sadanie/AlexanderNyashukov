#include <iostream>
#include "rational.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int s;
	float nominator, denominator;
	while (true) {
		cout << "1. ������ �����" << endl;
		cout << "2. ������ �����" << endl;
		cout << "3. �����" << endl;
		cin >> s;
		if (s == 3) {
			return 0;
		}
		switch (s) {
		case 1:
			cout << "������� ���������: "; cin >> nominator; cout << endl;
			cout << "������� �����������: "; cin >> denominator; cout << endl;
			Rational::printRational(Rational::y1(Rational(nominator, denominator)));
			break;
		case 2:
			cout << "������� �����: "; cin >> nominator; cout << endl;
			cout << Rational::y2(nominator);
			break;
		}
	}
	system("pause");
	return 0;
}