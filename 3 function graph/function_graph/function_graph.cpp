// function_graph.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
#include "stdio.h"
#include <math.h>

#include <iomanip>

//const int KEY_ESC = 27;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y, r = 3;
	for (x = -9; x <= 9; x++)
	{
		cout << fixed << setw(5) << setprecision(0) << x << " ";   //форматный вывод: setw(5) - всего 5 символов; setprecision(0) - ноль символов после запятой
	}

	cout << "\ny";
	for (x = -9; x <= 9; x++)
	{
		if (x >= -9 && x <= -6)			// от -9 до -6
			y = - sqrt(pow(r, 2) - pow((x + 6), 2)); //окружность
		else if (x >= -6 && x <= -3)	// от -6 до -3
			y = x + 3;								//прямая
		else if (x >= -3 && x <= 0)		// от -3 до  0
			y = sqrt(pow(r, 2) - pow(x, 2));		//окружность
		else if (x >= 0 && x <= 3)		// от  0 до  3
			y = 3 - x;								//прямая
		else if (x >= 3 && x <= 9)		// от  3 до  9
			y = 0.5 * x - 1.5;						//прямая
		cout << fixed << setw(5) << setprecision(2) << y << " ";   //форматный вывод           
	}
	cout << endl; //перевод на новую строку
	return 0;
}

