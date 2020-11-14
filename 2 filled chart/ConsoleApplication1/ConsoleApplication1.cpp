#include <iostream>
#include "stdio.h"
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian"); // Поддержка кирилицы
    double x, y, r;                                           // Объявление переменных
    cout << "Введите r: "; cin >> r;                        // Ввод переменной r
    for (int i = 1; i <= 10; i++)				     // Цикл на 10 выстрелов
    {
        cout << "Введите координаты " << i << " выстрела" << endl; //Сообщение пользователю
        cout << " x = "; cin >> x;                              // Ввод переменной x  
        cout << " y = "; cin >> y; cout << "\n";                // Ввод переменной x  
        cout << " Точка ( " << x << "; " << y << " ) -  ";

        if (x * x + y * y <= r * r && ((x >= 0 && y >= x) || (x <= 0 && y <= x)))
            cout << "Попадание!" << endl;
        else
            cout << "Мимо!" << endl;
        cout << endl;
    }
        return 0;
}

