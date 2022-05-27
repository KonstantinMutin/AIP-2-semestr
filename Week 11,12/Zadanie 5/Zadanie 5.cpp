// Задача 10 Робот-самолёт описывается как структура с полями:
//			 скорость вращения винта, радиус винта, коэффициент тяги.
//			 Напишите функцию для расчёта тяги, создаваемую винтом (произведение всех характеристик).

#include <iostream>

using namespace std;

struct rPlane {

	float V;
	float R;
	float K;

};

void ThrustCalculation(float v, float r, float k) {

	float F = v * r * k;

	setlocale(LC_ALL, "Rus");

	cout << "Тяга робота-самолёта = " << F << " Н" << endl;

}

int main() {

	rPlane v, r, k;

	v.V = 3.76;
	r.R = 2.1;
	k.K = 76;

	ThrustCalculation(v.V, r.R, k.K);

}