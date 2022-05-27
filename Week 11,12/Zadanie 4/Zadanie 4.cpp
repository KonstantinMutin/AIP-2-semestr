// Задача 7 Имеется информация о датчиках
//			диапазон измеряемых значений (min, max), погрешность, максимальная скорость.
//			Вывести данные о датчике с наименьшей скоростью работы.

#include <iostream>

using namespace std;

struct Sensors {

	float min;
	float max;
	float pogr;
	float MaxSpeed;

};

void LowestSpeed(float S1, float S2) {

	float V = S1 - S2;

	setlocale(LC_ALL, "Rus");

	if (V < 0) {
		cout << "1 сенсор имеет нименьшую скорость работы" << endl;
		cout << "Максимальная скорость работы 1 сенсора = " << S1 << " ips" << endl;
	}
	if (V > 0) {
		cout << "2 сенсора имеет наименьшую скорость работы" << endl;
		cout << "Максимальная скорость работы 2 сенсора = " << S2 << " ips" << endl;
	}
	if (V == 0) {
		cout << "Оба сенсора равны в точности" << endl;
		cout << "Максимальная скорость работы 1 сенсора = " << S1 << " ips" << endl;
		cout << "Максимальная скорость работы 2 сенсора = " << S2 << " ips" << endl;
	}
}

int main() {

	Sensors S1, S2;

	S1.MaxSpeed = 3600;
	S2.MaxSpeed = 2600;

	LowestSpeed(S1.MaxSpeed, S2.MaxSpeed);

}