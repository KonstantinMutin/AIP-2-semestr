// ������ 15 ���������� �� N ������� ������ �������� ������� ���������� ����: 
//			 �������, ������� �������, �������������, ������� �����.

#include <iostream>
#include <array>

using namespace std;

const int n = 3;

struct Zavod {

	string surname;
	string spec;
	float sredVozrast;
	float sredZP;

};


array<int, n>Z;

int main() {

	setlocale(LC_ALL, "Rus");

	string spec1 = "Slesar";
	string spec2 = "Tokar";
	int kolichSlesars = 0;
	int kolichTokars = 0;
	int kolichZav = 0;
	float sredZP = 0;

	Zavod Z[n];

	for (int i = 0; i < n; i++) {
		cout << "����� " << i + 1 << endl;
		cin >> Z[i].surname;
		cin >> Z[i].spec;
		Z[i].sredVozrast = 25 + rand() % 25;
		Z[i].sredZP = 25 + rand() % 60;
		cout << "������� ������� = " << Z[i].sredVozrast << "\n" << "������� ����� = " << Z[i].sredZP << "\n" << endl;
	}


	//	a. ������ ���������� �� �������, ��������� ���������� �������� � �������. ���������� ��� ��������.
	/*for (int i = 0; i < n; i++) {
		if (Z[i].spec == spec1)
			kolichSlesars += 1;
		if (Z[i].spec == spec2)
			kolichTokars += 1;
	}
	cout << "���������� ��������" << "\n" << kolichSlesars << "\n" << "���������� �������" << "\n" << kolichTokars << endl;*/

	//	c.������ ���������� �� �������, ��������� ������� ����� �� ���� �������.
	//	  ��������� ���������� �������, ��� ������� ����� �� ������ ���� ��������
	//	  �� ���� �������.���������� ��� �������� � ������� ���������� �� ���� �������.
	/*for (int i = 0; i < n; i++)
		sredZP += Z[i].sredZP;
	sredZP = sredZP / n;

	for (int i = 0; i < n; i++)
		if (Z[i].sredZP > sredZP)
			kolichZav += 1;

	cout << "������� ����� �� ������� = " << sredZP << "\n" << "���������� ������� � ������� ���� �������� �� �������" << "\n" << kolichZav << endl;*/

}