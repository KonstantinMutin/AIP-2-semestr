// Задача 9. Объявить, реализовать заполнение данными с клавиатуры ИЛИ из файла и вывести
//			 на экран матрицу, описывающую следующие сущности.Предложите свой вариант.
//			 a. Двумерное изображение. Изображение состоит из пикселей. 
//			 Каждый пиксель характеризуется яркостью цветовых каналов : красный, синий, зелёный.

#include <iostream>
#include <array>

using namespace std;

void PictureMatrix() {

    const int rows = 3;
    const int cols = 3;
    int mat[rows][cols];

    setlocale(LC_ALL, "Rus");

    for (int i = 0; i <rows; i++)
        for (int j = 0; j < cols; j++) {
            std::cout << "Введите яркость для цветовых каналов: красный,синий, зелёный " << i << " " << j << std::endl;
            cin >> mat[i][j];
        }
}

int main()
{
    PictureMatrix();

    return 0;
}