// Week_1-2_Zadanie_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// 9. Сделать конвертер величин. Формат ввода: Направление_Перевода Величина
//  f. Давление (паскаль, бар, фунт на квадратный дюйм)

#include <iostream>

int main()
{
    int I;
    float x;
    std::cout << "Vvedite napravlenie perevoda"<<"\n"<<"1-Paskal v bar" << "\n" <<"2-Paskal v funt"<<"\n"<<"3-bar v paskal" << "\n" << "4-bar v funt" << "\n" << "5-funt v paskal" << "\n" << "6-funt v bar"<<std::endl;
    std::cin >> I;
    std::cout << "Vvedite chislo dlya perevoda" << std::endl;
    std::cin >> x;
    if (I == 1) {
        x = x * 0.00001;
        std::cout << x << " Bar";
    };
    if (I == 2) {
        x = x * 0.000145;
        std::cout << x << " Funt na kvadratniy duym";
    };
    if (I == 3) {
        x = x * 100000;
        std::cout << x << " Paskal";
    };
    if (I == 4) {
        x = x * 14.5;
        std::cout << x << " Funt na kvadratniy duym";
    };
    if (I == 5) {
        x = x * 6894.76;
        std::cout << x << " Paskal";
    };
    if (I == 6) {
        x = x * 0.069;
        std::cout << x << " Bar";
    };








}

