#include <iostream>   //Потоковый ввод/вывод
#include <iomanip>    //Форматный ввод/вывод
#include <cmath>      //Математическая библиотека
#include "stdio.h"    //Включение директив процессора
using namespace std;  //Стандартное пространство имен
constexpr auto PI = 3.1415926535; //Спецификатор constexpr, с помощью него можно создавать переменные и функции которые будут рассчитаны на этапе компиляции

double z(double x, double y) //Вспомогательная функция
{
	double result;
	result = (sqrt(pow(sin(x), 2) + 3 * y) * pow(x + log(y + PI), 2)) / (pow(x + pow(y, 2), 2) * (pow(x, 2) + y));
	return result;
}

int main()                                //Основная функция программы
{
	setlocale(LC_ALL, "Russian");         //Руссфикатор
	double a, b, c;                       //Инициализация переменных
	for (int i = 1; i <= 4; i++)          //Цикл на 4 итерации, чтобы не выходя из программы проверить все 4 пары значений
	{
		cout << "Введите значения a и b" << endl;                                     //Сообщение пользователю
		cin >> a >> b;                                                                //Считывание введенных значений
		c = z((a + sqrt(b)), (pow(a, 2) + b)) + z((a * b + 1), (3 * a + pow(b, 2)));
		cout << "f(a, b) = " << fixed << setprecision(4) << c << endl;                //Форматный вывод
		cout << endl;
	}
	system("pause");
	return 0;
}