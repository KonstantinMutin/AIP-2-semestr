// Задача 1. Реализовать сложение, вычитание, умножение, транспонирование матриц (разрешается фиксированный размер матриц).
//           5

#include <iostream>
#include <array>

using namespace std;

void MatrixOperations() {

    setlocale(LC_ALL, "Rus");

    const int rows = 3;
    const int cols = 6;
    int matA[rows][cols], matB[rows][cols], matC[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matA[i][j] = rand() % 30 - 20;

            cout << matA[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "\n";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matB[i][j] = rand() % 21 - 16;
            cout << matB[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "\n";

    int Operation = 0;

    cout << "Выбирете нужную операцию над матрицами :\n1 - Сложение\n2 - Вычетание\n3 - Умножение на число\n4 - Транспонирование\n";
    cin >> Operation;
    cout << "\n";

    if (Operation == 1) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                matC[i][j] = matA[i][j] + matB[i][j];
                cout << matC[i][j] << "\t";
            }
            cout << "\n";
        }
    }

    if (Operation == 2) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                matC[i][j] = matA[i][j] - matB[i][j];
                cout << matC[i][j] << "\t";
            }
            cout << "\n";
        }
    }

    if (Operation == 3) {
        int x = 0;
        cout << "Введите число x";
        cin >> x;
        cout << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                matC[i][j] = matA[i][j] * x;
                cout << matC[i][j] << "\t";
            }
            cout << "\n";
        }
    }

    if (Operation == 4) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                matC[i][j] = matA[j][i];
                cout << matC[i][j] << "\t";
            }
            cout << "\n";
        }
    }
}
int main() {

    MatrixOperations();

    return 0;
}