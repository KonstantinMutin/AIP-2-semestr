// Задача 12 Увеличить все нечётные элементы массива на 3, а чётные в 2 раза.

#include <iostream>
#include <array>

using namespace std;

const int n = 25;

array<int, n>M;

int main() {

	setlocale(LC_ALL, "Rus");

	cout << "Элементы массива:" << endl;
	for (int i = 0; i < n; i++) {
		M[i] = rand() % 50;
		cout << M[i] << " ";
	}
	cout << "\n";

	cout << "Изменённые элементы массива:" << endl;
	for (int i = 0; i < n; i++) {
		if ((M[i] % 2) == 0)
			M[i] = M[i] * 2;
		if ((M[i] % 2) != 0)
			M[i] = M[i] * 3;
		cout << M[i] << " ";
	}
}