#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>


float r, l;

int main() {

	std::cin >> r >> l;
	std::cout << "S=" << M_PI * r*(r+l) << std::endl;

	return 0;
}