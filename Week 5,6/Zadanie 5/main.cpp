// ������ 3. �������� ���������, ������� ��������� �� ������������ ���������� ����� 
// � ����������, ������ �� ����� � �������������� �������.
// �.���� ���������� (x * x) + (y * y) = 1.
// ������� ���������� ���������� ����� ������� y=x � y=-x.
// ����� ���������� � ����� x=0, y=0.

#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
    setlocale(LC_ALL, "Rus");
	float x, y;
	const float r = 1;
    std::cout << "������� 'x' � 'y': ";
    std::cin >> x >> y;
    float l = sqrt(x * x + y * y);
    bool area1 = (x <= 1) && (y <= x ) && (y >= 0);
    bool area2 = (x >= -1) && (y >= -x) && (y >= 0);
    if (area1 || area2)
        std::cout << "��, ����� �������� � �������.";

    else
        std::cout << "���, ����� ��������� �� ��������� �������.";

    return 0;
}