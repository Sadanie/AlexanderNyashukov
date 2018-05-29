#include <iostream>
#include "Deq.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i = 0, x;
	Deq<int> d;

	while (true) {
		cout << "1. �������� ����� ������\n";
		cout << "2. �������� ����� ����\n";
		cout << "3. ������� �����\n";
		cout << "4. ������� ���\n";
		cout << "5. ����� ����� ������\n";
		cout << "6. ����� ����� �����\n";
		cout << "7. �����\n";
		cout << "�������� ����� ����: "; cin >> x;
		if (x == 7) {
			return 0;
		}
		switch (x)
		{
		case 1:
			cout << "������� �����: "; cin >> x;
			d.pushFront(x);
			cout << endl;
			break;
		case 2:
			cout << "������� �����: "; cin >> x;
			d.pushBack(x);
			cout << endl;
			break;
		case 3:
			cout << "������� ����� ���������� �����: "; cin >> x;
			d.del(x);
			cout << endl;
			break;
		case 4:
			d.display();
			cout << endl;
			break;
		case 5:
			cout << "����� ������: " << d.popFront() << endl;
			break;
		case 6:
			cout << "����� �����: " << d.popBack() << endl;
			break;
		default:
			break;
		}
	}

}