// Задача 2. Протабулировать функцию (шаг и диапазон задаёт пользователь):
// K: y = sqrt(5 +4x) + 13x + cos(12x+91)

#include <iostream>

using namespace std;

int main() {

	int diap, shag;
	int arg = 4;
	float y;
	setlocale(LC_ALL, "Rus");
	cout << "Введите шанг и аргумент: ";
	cin >> shag >> diap;
	for (int i = 0; i < diap; i += shag) {
		int x = arg;
		y = sqrt(5 + 4 * x) + 13 * x + cos(12 * x + 91);
		cout << y << endl;
	}
	return 0;
}