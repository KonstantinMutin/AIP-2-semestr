//8. ��������� �������� ���������:
//f. ? (x^2 + b)?[b^2sin^3(x + a)] / x ��� a = 0.1, b = 0.2 � x = 1

#include <iostream>

int main() {

	float a = 0.1;
	float b = 0.2;
	float x = 1;
	float sn = sin(x + a);

	std::cout << "Chislo=" << sqrt(x * x + b) - ((b * b * (sn * sn * sn)) / x) << std::endl;

	return 0;
}