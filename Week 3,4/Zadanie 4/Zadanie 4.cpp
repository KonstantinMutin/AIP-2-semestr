// Задача 2. Протабулировать функцию (шаг и диапазон задаёт пользователь):
// G: y = -(2+9x)^2 + 6x

#include <iostream>

using namespace std;

int main() {

	int shag, diap;
	setlocale(LC_ALL, "Rus");
	cout << "Введите шаг и диапазон: ";
	cin >> shag >> diap;
	for (int i = 0; i < diap; i += shag) {
		float x = 3;
		float y;
		y = -((2 + (9 * x)) * (2 + (9 * x))) + (6 * x);
		cout << y << endl;
	}
	return 0;
}
