// Задача 1 Сгенерировать массив со случайными числами в диапазоне:
//			a. [0,10]

#include <iostream>
#include <array>

std::array <int, 10> nums;

int main() {

	for (int i = 0; i < 10; i++) {
		nums[i] = rand() % 100;
		std::cout << nums[i] << std::endl;
	}
	return 0;
}