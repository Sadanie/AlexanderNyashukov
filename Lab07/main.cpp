#include <iostream>
#include "Deq.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i = 0, x;
	Deq<int> d;

	while (true) {
		cout << "1. Положить число наверх\n";
		cout << "2. Положить число вниз\n";
		cout << "3. Удалить число\n";
		cout << "4. Вывести дек\n";
		cout << "5. Взять число сверху\n";
		cout << "6. Взять число снизу\n";
		cout << "7. Выход\n";
		cout << "Выберите пункт меню: "; cin >> x;
		if (x == 7) {
			return 0;
		}
		switch (x)
		{
		case 1:
			cout << "Введите число: "; cin >> x;
			d.pushFront(x);
			cout << endl;
			break;
		case 2:
			cout << "Введите число: "; cin >> x;
			d.pushBack(x);
			cout << endl;
			break;
		case 3:
			cout << "Введите номер удаляемого числа: "; cin >> x;
			d.del(x);
			cout << endl;
			break;
		case 4:
			d.display();
			cout << endl;
			break;
		case 5:
			cout << "Число сверху: " << d.popFront() << endl;
			break;
		case 6:
			cout << "Число снизу: " << d.popBack() << endl;
			break;
		default:
			break;
		}
	}

}