// ������ 7. ��������� ��������, ������������ ���������� ���������� ����������� �����,
// ����� ���� �������� ����� �.

#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL, "Rus");
    int n, sum = 0, count = 0;
    cout << "������� n: " << endl;
    cin >> n;

    while (true)
    {
        for (int i = 100, a = i; i < 1000; ++i, sum = 0, a=i)
        {
            do
                sum += a % 10;
            while (a /= 10);

            if (sum == n)
                ++count;
        }
        std::cout << count << std::endl;
        break;
    }
}