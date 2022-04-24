//1. Дана функция y = f(x).Найти значение функции по x :
//A: y = 2x - 10, если x > 0
//	 y = 10, если x = 0
//	 y = 2 * |x| - 1, если x < 0

#include <iostream>

int main() {

	float x, y;
	std::cin >> x;
	if (x > 0)
		y = 2 * x - 10;
	if (x == 0)
		y = 10;
	if (x < 0)
		y = 2 * abs(x) - 1;

	std::cout << y;
}