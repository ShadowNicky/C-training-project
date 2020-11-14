// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>   //Потоковый ввод/вывод
#include <iomanip>    //Форматный ввод/вывод
#include <cmath>      //Математическая библиотека
#include "stdio.h"    //Включение директив процессора
using namespace std;  //Стандартное пространство имен

int main()            //Основная функция программы
{
    setlocale(LC_ALL, "Russian");     //Руссфикатор
    double x, y;                      //Инициализация переменных
    for (int i = 1; i <= 2; i++)      //Цикл на 2 итерации
    {
        cout << "Введите число\nx = ";//Сообщение пользователю
        cin >> x;                     //Считывание введенных значений

        y = (asin(exp(-x))) / (sqrt(1 + pow(cos(x), 2)) * exp(-x) * (1 + pow((sin(x)), 2)));
        cout << "y = " << fixed << setprecision(4) << y << "\n\n\n"; //Форматный вывод
    }
    system("pause");
    return 0;
}

