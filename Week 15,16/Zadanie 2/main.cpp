// «адача 5. ¬ квадратной матрице дл€ каждой строки найти минимальный элемент и
//			 переставить его с элементом, сто€щим в этой строке на главной диагонали.

#include <iostream>
#include <array>
#include <cstdlib>

using namespace std;

void matrica() {

    int min = 10;
    const int rows = 3;
    const int cols = 3;
    int mat[rows][cols];
    
    srand(2);
    /*for (int i = 0; i < rows; i++)
        for (int k = 0; k < cols; k++)
            */

    for (int i = 0; i < rows; i++) {
        for (int k = 0; k < cols; k++) {
            mat[i][k] = rand() % 10;
            std::cout << mat[i][k] << "\t";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < rows; i++) {
        for (int k = 0; k < cols; k++) {
            if (min > mat[i][k])
                min = mat[i][k];
        }
        mat[i][i] = min;
    }

    std::cout <<"\n" << std::endl;

    for (int i = 0; i < rows; i++) {
        for (int k = 0; k < cols; k++)
            std::cout << mat[i][k] << "\t";
        std::cout << std::endl;
    }
}

int main(){

    matrica();

    return 0;
}
