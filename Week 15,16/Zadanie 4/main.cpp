// ������ 9. ��������, ����������� ���������� ������� � ���������� ��� �� ����� � �������
//			 �� ����� �������, ����������� ��������� ��������.���������� ���� �������.
//			 a. ��������� �����������. ����������� ������� �� ��������. 
//			 ������ ������� ��������������� �������� �������� ������� : �������, �����, ������.

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
            std::cout << "������� ������� ��� �������� �������: �������,�����, ������ " << i << " " << j << std::endl;
            cin >> mat[i][j];
        }
}

int main()
{
    PictureMatrix();

    return 0;
}