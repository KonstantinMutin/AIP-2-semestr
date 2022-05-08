//3. ������� ��������� DigitCountSum(K, C, S), ��������� ���������� C ���� ������
//   �������������� ����� K, � ����� �� ����� S(K � �������, C � S � ��������
//   ��������� ������ ����).� ������� ���� ��������� ����� ���������� � �����
//	 ���� ��� ������� �� ���� ������ ����� �����.

#include <iostream>

using namespace std;

void DigitCountSum(int &K, int &C, int &S) {

	while (K) {

		C++;
		S += K % 10;
		K /= 10;
	}
    cout << C << "  " << S << endl;
}

int main(){
    
    int k, c, s;
    for (int i = 1; i <= 5; i++) { 
        cin >> k;
        c = 0, s = 0;
        DigitCountSum(k, c, s);
    }
    return 0;
}