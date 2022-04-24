// Задача 3. Пользователь задаёт число Ч и Х. 
// Посчитать y:
// a: y = x + 2x + 3x + ... + Чx

#include <iostream>

using namespace std;

int main() {

	int n;
	float x;
	float sum = 0;
	cout << "Enter the n and x: ";
	cin >> n >> x;
	for (int i = 1; i <= n; i++) {
		x *= -1;
		sum += (1 / ((6 + i) * x));
	}
	cout << "y=" << sum << endl;

	return 0;
}