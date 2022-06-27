// Задача 2. Преобразовать матрицу, умножив элементы каждой строки на значение второго
//			 элемента этой строки.

#include <iostream>
#include <array>

using namespace std;


void matrica() {

    const int rows = 2;
    const int cols = 2;
    int mat[rows][cols];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            mat[i][j] = rand() % 5;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            std::cout << mat[i][j] << " ";
        std::cout << std::endl;
    }

    std::cout << "\n" << std::endl;

    int a = mat[0][1];
    int b = mat[1][1];

    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < cols; j++)
            mat[i][j] *= a;
    }

    for (int i = 1; i < 2; i++) {
        for (int j = 0; j < cols; j++)
            mat[i][j] *= b;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            std::cout << mat[i][j] << " ";
        std::cout << std::endl;
    }

}

int main() {

    matrica();

    return 0;

}