#include <iostream>

int main() {

	float a = 0.1;
	float b = 0.2;
	float x = 1;
	float sn = sin(x + a);

	std::cout << "Chislo=" << sqrt(x * x + b) - ((b * b * (sn * sn * sn)) / x) << std::endl;

	return 0;
}