// Задача 2 Вычислить сумму элементов массива:
//			a. больших 5, меньших 7, больших 3

#include <iostream>
#include <array>

std::array <int, 30> nums;

int main() {

	int sum = 0;

	srand(3);

	for (int i = 0; i < 30; i++)
		nums[i] = rand() % 10;

	for (int i = 0; i < 30; i++)
		std::cout << nums[i] << " ";

	std::cout << "" << std::endl;
	std::cout << "" << std::endl;

	for (int i = 0; i < 30; i++) {

		if (nums[i] > 3)
			sum += nums[i];

		if (nums[i] > 5)
			sum += nums[i];

		if (nums[i] < 7)
			sum += nums[i];
	}

	std::cout << sum << std::endl;

}