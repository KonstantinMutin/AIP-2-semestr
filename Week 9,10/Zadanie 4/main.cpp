//9. ќписать функцию Calc(A, B, Op) вещественного типа, выполн€ющую над
//   ненулевыми вещественными числами A и B одну из арифметических операций и
//   возвращающую ее результат.¬ид операции определ€етс€ целым параметром Op : 
//   1Ч вычитание, 2 Ч умножение, 3 Ч деление, остальные значени€ Ч сложение.
//   — помощью Calc выполнить дл€ данных A и B операции, определ€емые данными
//   целыми N1, N2, N3.

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