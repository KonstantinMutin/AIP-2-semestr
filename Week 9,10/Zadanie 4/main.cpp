//9. ������� ������� Calc(A, B, Op) ������������� ����, ����������� ���
//   ���������� ������������� ������� A � B ���� �� �������������� �������� �
//   ������������ �� ���������.��� �������� ������������ ����� ���������� Op : 
//   1� ���������, 2 � ���������, 3 � �������, ��������� �������� � ��������.
//   � ������� Calc ��������� ��� ������ A � B ��������, ������������ �������
//   ������ N1, N2, N3.

#include <iostream>

void Calc(float &A, float &B, int &Op) {

	switch(Op) {
    case 1:
        std::cout << A - B << std::endl;
        break;
    case 2:
        std::cout << A * B << std::endl;
        break;
    case 3:
        std::cout << A / B << std::endl;
        break;
    default:
        std::cout << A + B << std::endl;
        break;
    }
}

int main(){
    float A, B;
    int N;
    for (int i = 0; i < 3; i++) {
        std::cin >> A >> B >> N;
        Calc(A, B, N);
    }
    return 0;
}