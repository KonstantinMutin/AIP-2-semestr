// ������ 12 ��������� ��� �������� �������� ������� �� 3, � ������ � 2 ����.

#include <iostream>
#include <array>

using namespace std;

const int n = 25;

array<int, n>M;

int main() {

	setlocale(LC_ALL, "Rus");

	cout << "�������� �������:" << endl;
	for (int i = 0; i < n; i++) {
		M[i] = rand() % 50;
		cout << M[i] << " ";
	}
	cout << "\n";

	cout << "��������� �������� �������:" << endl;
	for (int i = 0; i < n; i++) {
		if ((M[i] % 2) == 0)
			M[i] = M[i] * 2;
		if ((M[i] % 2) != 0)
			M[i] = M[i] * 3;
		cout << M[i] << " ";
	}
}