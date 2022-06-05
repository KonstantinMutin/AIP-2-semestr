// Задача 14 Создать новый массив из двух других массивов путём операций над элементами массивов:
//			 a. перемножения

#include <iostream>
#include <array>

using namespace std;

const int n = 15;

array<int, n>A;
array<int, n>B;
array<int, n>C;

int main() {

	cout << "A:" << endl;
	for (int i = 0; i < n; i++) {
		A[i] = rand() % 25;
		cout << A[i] << " ";
	}
	cout << "\n";

	cout << "B:" << endl;
	for (int i = 0; i < n; i++) {
		B[i] = rand() % 50;
		cout << B[i] << " ";
	}
	cout << "\n";

	cout << "C:" << endl;
	for (int i = 0; i < n; i++) {
		C[i] = A[i] * B[i];
		cout << C[i] << " ";
	}
}