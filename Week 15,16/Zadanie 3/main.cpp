// Задача 8. Дана матрица. Элементы первой строки — мощность электромотора, 
//			 второй строки — категория мотора(число от 1 до 3).Найти самый мощный мотор категории 3.

#include <iostream>
#include <array>

using namespace std;

void matrica() {

    const int rows = 2;
    const int cols = 6;
    int mat[rows][cols];

    for (int i = 0; i < 1; i++)
        for (int k = 0; k < cols; k++)
            mat[i][k] = rand() % 1000;

    for (int i = 1; i < rows; i++)
        for (int k = 0; k < cols; k++)
            mat[i][k] =1 + rand() % 4;

    for (int i = 0; i < rows; i++) {
        for (int k = 0; k < cols; k++)
            std::cout << mat[i][k] << "\t";
        std::cout << std::endl;
    }

    std::cout << "\n" << std::endl;

    int max = 0;

    for (int i = 0; i < 1; i++)
        for (int k = 0; k < cols; k++)
            if ((mat[0][k] > max)&&(mat[1][k]==3))
                max = mat[0][k];

    std::cout << max << endl;
}

int main()
{
    matrica();

    return 0;
}
