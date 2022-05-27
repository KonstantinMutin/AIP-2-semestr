// Задача 2 Создайте структуру для хранения комплексных чисел. 
// Атрибуты: вещественная и мнимая части. Объявите два числа и получите их значения от пользователя.
// e. Напишите функцию, которая будет умножать комплексные числа.

#include <iostream>

using namespace std;

struct Complex {
    float a, b, c, d;
};

void ComplexMultipl(float a, float b, float c, float d) {

    float V = (a * c) - (b * d);
    float M = (a * d) + (b * c);
    cout << "ComplexMultipl=" << V << "+" << M << "i" << endl;
}

int main() {

    Complex C{};

    C.a = 3,12;
    C.b = 6.74;
    C.c = 3.22;
    C.d = 4.35;

    ComplexMultipl(C.a, C.b, C.c, C.d);
}