//16. Реализовать функцию y = f(x). Протабулировать функцию.

#include <iostream>
#include <cmath>

using namespace std;

void Func(float &x, float &y) {
	
	if (x > 2)
		y = 2 * x - 15;
	if (x == 2)
		y = 5;
	if (x < 1)
		y = 3 * abs(x + 2) - 7;
}

int main() {
	float X;
	float Y;
	int diap, shag;
	cin >> X >> diap >> shag;
	for (int i = 0; i < diap; i += shag) {
		Func(X, Y);
		cout << Y << endl;
	}
}