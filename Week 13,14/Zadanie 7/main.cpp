// Задача 15 Информация по N заводам города задается строкой следующего вида: 
//			 фамилия, средний возраст, специальность, средний оклад.

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
		cout << "Завод " << i + 1 << endl;
		cin >> Z[i].surname;
		cin >> Z[i].spec;
		Z[i].sredVozrast = 25 + rand() % 25;
		Z[i].sredZP = 25 + rand() % 60;
		cout << "Средний возраст = " << Z[i].sredVozrast << "\n" << "Средний оклад = " << Z[i].sredZP << "\n" << endl;
	}


	//	a. Ввести информацию по заводам, посчитать количество слесарей и токарей. Напечатать эти значения.
	/*for (int i = 0; i < n; i++) {
		if (Z[i].spec == spec1)
			kolichSlesars += 1;
		if (Z[i].spec == spec2)
			kolichTokars += 1;
	}
	cout << "Количество слесарей" << "\n" << kolichSlesars << "\n" << "Количество токарей" << "\n" << kolichTokars << endl;*/

	//	c.Ввести информацию по заводам, посчитать средний оклад по всем заводам.
	//	  Посчитать количество заводов, где средний оклад по заводу выше среднего
	//	  по всем заводам.Напечатать это значение и вывести информацию по этим заводам.
	/*for (int i = 0; i < n; i++)
		sredZP += Z[i].sredZP;
	sredZP = sredZP / n;

	for (int i = 0; i < n; i++)
		if (Z[i].sredZP > sredZP)
			kolichZav += 1;

	cout << "Средний оклад по заводам = " << sredZP << "\n" << "Количество заводов с окладом выше среднего по заводам" << "\n" << kolichZav << endl;*/

}