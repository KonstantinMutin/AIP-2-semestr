// Задача 6 Имеется информация о датчиках: 
//			диапазон измеряемых значений (min, max), погрешность, максимальная скорость.
//			Вывести данные о самом точном датчике.

#include <iostream>

using namespace std;

struct Sensors {
	float min;
	float max;
	float pogr;
	float maxSpeed;
};

void MostAccurate(float S1, float S2) {

	float P = S1 - S2;

	setlocale(LC_ALL, "Rus");

	if (P < 0) {
		cout << "1 сенсор является более точным " << endl;
		cout << "Погрешность = " << S1 << "%" << endl;
	}
	if (P > 0) {
		cout << "2 сенсор является более точным" << endl;
		cout << "Погрешность = " << S2 << "%" << endl;
	}
	if (P == 0) {
		cout << "Оба сенсора равны в точности" << endl;
		cout << "Погрешность = " << S1 << "%" << endl;
		cout << "Погрешность = " << S2 << "%" << endl;
	}

}

int main() {

	Sensors S1, S2;

	S1.pogr = 0.76;
	S2.pogr = 2.76;

	MostAccurate(S1.pogr, S2.pogr);
}