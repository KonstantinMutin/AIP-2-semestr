// Задача 3. Напишите программу, которая принимает от пользователя координаты точки 
// и определяет, попала ли точка в заштрихованную область.
// Д.Дана окружность (x * x) + (y * y) = 1.
// Область окружности ограничена двумя линиями y=x и y=-x.
// Линии начинаются в точке x=0, y=0.

#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
    setlocale(LC_ALL, "Rus");
	float x, y;
	const float r = 1;
    std::cout << "Введите 'x' и 'y': ";
    std::cin >> x >> y;
    float l = sqrt(x * x + y * y);
    bool area1 = (x <= 1) && (y <= x ) && (y >= 0);
    bool area2 = (x >= -1) && (y >= -x) && (y >= 0);
    if (area1 || area2)
        std::cout << "Да, точка попадает в область.";

    else
        std::cout << "Нет, точка находится за пределами области.";

    return 0;
}