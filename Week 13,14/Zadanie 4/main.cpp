// ������ 13 ��������� ��� ������������� �������� �� 5, � ������������� ��������� �� 1

#include <iostream>
#include <array>

using namespace std;

const int n = 10;

array<float, n>N;
array<float, n>Otric;
array<float, n>Poloj;

int main() {

	setlocale(LC_ALL, "Rus");

	cout << "����� �����:" << endl;

	for (int i = 0; i < n; i++) {
		N[i] = -10 + (rand() % 50);
		cout << N[i] << " ";
	}

	cout << "\n";

	for (int i = 0; i < n; i++) {
		if (N[i] < 0)
			Otric[i] = N[i] + 5;
		if (N[i] > 0)
			Poloj[i] = N[i] - 1;
	}
	cout << "������������� �����:" << endl;
	for (int i = 0; i < n; i++)
		cout << Otric[i] << " ";
	
	cout << "\n";

	cout << "������������� �����:" << endl;
	for (int i = 0; i < n; i++)
		cout << Poloj[i] << " ";
}