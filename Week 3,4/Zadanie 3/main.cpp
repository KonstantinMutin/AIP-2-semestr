// Задача 2. Протабулировать функцию (шаг и диапазон задаёт пользователь):
// F: y = sqrt(-(1 + 3x)/2) + 3x

#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int diap, shag;
	setlocale(LC_ALL, "Rus");
	cout << "Введите шанг и аргумент: ";
	cin >> shag >> diap;
	for (int i = 0; i < diap; i += shag) {
		float x = 4;
		float y;
		y = sqrt(-1 + (3 * x) / 2) + (3 * x);
		cout << y << endl;
	}
	return 0;
}