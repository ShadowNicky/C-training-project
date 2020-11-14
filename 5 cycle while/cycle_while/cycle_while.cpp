// cycle_while.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
#include "stdio.h"
#include <math.h>
#include <iomanip>
using namespace std;

double Y(double x, int n)
{	double b, a, y = 0;
	int i;
	a = sin(x);
	b = sqrt(2);
	i = 0;
	while (i < n)
	{	i++;
		if (i <= 0)
			y = 0;
		else if (i >= 1)
		{	y = y + a / b;
			a = sin(a); 
			b = sqrt(i + b + 2);}
	}
	return y;}

int main()
{   double x;	int n;
	for (int j = 0; j <= 1; j++)
	{	cout << "Enter X and N" << endl;  //Сообщение пользователю
		cin >> x >> n;
		cout << "Answer y = " << setprecision(5) << Y(x, n) << "\n\n";}	
}