//1. ���� ������� y = f(x).����� �������� ������� �� x :
//H: y = 2x - 10, ���� x > 3
//	 y = 10, ���� x = 3
//	 y = (2 * x + 1)^2- 1, ���� x < 3

#include <iostream>

int main() {

	float x, y;
	std::cin >> x;
	if (x > 3)
		y = 2*x - 10;
	if (x == 3)
		y = 10;
	if (x < 3)
		y = ((2 * x + 1) * (2 * x + 1)) - 1;

	std::cout << y;
}