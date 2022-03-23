//Zadanie_6.cpp 
//15. Сделать калькулятор. Формат ввода: Операция Ч1 Ч2

#include <iostream>

int main()
{
    float x1, x2;
    char Operaciya;
    setlocale(LC_ALL, "Rus");
    std::cout << "Введите тип операции и 2 числа через пробел" << std::endl;

    std::cin >> Operaciya >> x1 >> x2;
    if (Operaciya == '/') {
        std::cout << x1 / x2;
    }
    if (Operaciya == '*') {
        std::cout << x1 * x2;
    }
    if (Operaciya == '-') {
        std::cout << x1 - x2;
    }
    if (Operaciya == '+') {
        std::cout << x1 + x2;
    }



    /*switch (Operaciya)
   {
       case '+':
           std::cout << x1 + x2;
           break;
       case '-':
           std::cout << x1 - x2;
           break;
       case '*':
           std::cout << x1 * x2;
           break;
       case '/':
           std::cout << x1 / x2;
           break;
   }*/
}