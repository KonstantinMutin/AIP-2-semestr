//1. ���� ������� y = f(x).����� �������� ������� �� x :
//D: y = 3x - 7, ���� x > 1
//	 y = 3, ���� x = 1
//	 y = 3 * | x + 2 | -7, ���� x < 1

#include <iostream>

int main() {

	float x, y;
	std::cin >> x;
	if (x > 1)
		y = 3 * x - 7;
	if (x == 1)
		y = 3;
	if (x < 1)
		y = 3 * fabs(x + 2) - 7;
	std::cout << y;
}