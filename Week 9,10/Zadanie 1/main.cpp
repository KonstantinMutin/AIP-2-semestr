//1. В предыдущих домашних заданиях найти блоки кода, которые возможно выделить
//   в функции и определить их в функции.Например, запись в файл, вычисление формул.

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>


void Mean(float r, float l, float& AMean) {

	AMean = M_PI * r * (r + l);
}

int main() {

	float R, L, A;
	R = 5;
	L = 2;
	Mean(R, L, A);
	std::cout << "AMean=" << A << std::endl;

	return 0;
}