//1. Создайте структуру, которая хранит время: часы, минуты, секунды.
//   a. Написать функцию, которая складывает два времени.

#include <iostream>

using namespace std;

struct Time {

	float Hours;
	float Minutes;
	float Seconds;

};

void AdditionTime(int sec1, int sec2, int min1, int min2, int h1, int h2) {

	int T1 = sec1 + sec2;
	int T2 = min1 + min2;
	int T3 = h1 + h2;
	if (T1 >= 60) {
		T2 = T2 + (T1 / 60);
		T1 = T1 % 60;
	}
	if (T2 >= 60) {
		T3 = T3 + (T2 / 60);
		T2 = T2 % 60;
	}
	cout << T3 << " hours" << endl;
	cout << T2 << " minutes" << endl;
	cout << T1 << " seconds" << endl;
}

int main() {

	Time sec1, sec2, min1, min2, h1, h2;

	sec1.Seconds = 30;
	sec2.Seconds = 30;
	min1.Minutes = 29;
	min2.Minutes = 30;
	h1.Hours = 2;
	h2.Hours = 1;

	AdditionTime(sec1.Seconds, sec2.Seconds, min1.Minutes, min2.Minutes, h1.Hours, h2.Hours);

}