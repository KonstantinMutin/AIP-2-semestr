//3. ќписать процедуру DigitCountSum(K, C, S), наход€щую количество C цифр целого
//   положительного числа K, а также их сумму S(K Ч входной, C и S Ч выходные
//   параметры целого типа).— помощью этой процедуры найти количество и сумму
//	 цифр дл€ каждого из п€ти данных целых чисел.

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