// ������ 3 ��������� ����� ��������/������ ��������� �������

#include <iostream>
#include <array>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	const int n = 10;
	array<int, n>N;
	float SumNech = 0;
	float SumChet = 0;

	for (int i = 0; i < n; i++)
		N[i] = rand() % 20;
	
	for (int i = 0; i < n; i++) {
		if ((N[i] % 2) == 0)
			SumNech += N[i];
		if ((N[i] % 2) != 0)
			SumChet += N[i];
	}

	cout << "����� �������� ����� = " << SumNech << endl;
	cout << "����� ������ ����� = " << SumChet << endl;
}