#include <iostream>   //Потоковый ввод/вывод
#include <iomanip>    //Форматный ввод/вывод
#include <cmath>      //Математическая библиотека
#include "stdio.h"    //Включение директив процессора
using namespace std;  //Стандартное пространство имен
constexpr auto PI = 3.1415926535; //Спецификатор constexpr, с помощью него можно создавать переменные и функции которые будут рассчитаны на этапе компиляции

double rez(double a, double b) //Вспомогательная функция
{
    return ((a + pow(b, 2)) * (pow(a, 2) + b)) / sqrt((sin(a / PI) + b) * (exp(a) + exp(-b)));
}

int main()	//Основная функция программы
{
    setlocale(LC_ALL, "Russian");     //Руссфикатор
    double a, b;                    //Инициализация переменных
    for (int i = 1; i <= 4; i++)
    {
        cout << "Введите значения a и b" << endl;       //Сообщение пользователю
        cin >> a >> b;                           //Считывание введенных значений
        cout << "f(a, b) = " << fixed << setprecision(4) << rez(a + 2 * b, a * b + 1) + rez(a + sqrt(b), pow(a, 2) + b) << endl; //Форматный вывод
        cout << endl;
    }
    system("pause");
    return 0;
}
