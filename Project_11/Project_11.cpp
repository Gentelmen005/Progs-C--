#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include <iostream>
#include <windows.h>
#include <algorithm>
#include <vector>
#include "Program1.h"
#include "Program2.h"
#include "Program3.h"
#include "Program4.h"
#include "Program5.h"

using namespace std;

void program1()
{
	/*Описать рекурсивную функцию для вычисления n –го члена ряда 3, 0.3,
0.03, 0.003, … 0.00003*/

	std::cout << "Программа 1 запущена.\n";
	int n;
	double m;
	n = 0;

	cout << "Введите n(для вычисления n-го члена ряда): ";
	cin >> n;
	cout << endl;
	cout << "Введите m: ";
	cin >> m;

	Rec(n, m);


}

void program2()
{
	/*Описать рекурсивную функцию для вычисления произведения Вычислить : ...(формула)...*/
	std::cout << "Программа 2 запущена.\n";
	
	float s;
	s = 1;
	int i = 1;
	std::cout << "Result: " << y(i, s);
}

void program3()
{
	/*Описать рекурсивную функцию для вычисления суммы первых k слагаемых.
	Входные параметры функции : х – вещественное и k – целое ...(формула)...*/
	std::cout << "Программа 3 запущена.\n";

	float x;
	int k;
	float m;
	m = 2;
	cout << "Ввод данных(х – вещественное и k – целое)";
	cin >> x >> k;
	cout << f(x, k, m) << "\n";

}

void program4()
{
	/*Описать рекурсивную процедуру для вычисления i –го члена ряда по
	формуле: ...(формула)...*/
	std::cout << "Программа 4 запущена.\n";

	double x;
	int a;
	int i;

	cout << "Ввод данных(x = 1, a > 0, i номер ряда)";
	cin >> x >> a >> i;
	cout << f(x, a, i) << "\n";
}

void program5()
{
	/*Описать рекурсивную функцию для вычисления y  cos(15 cos(14  cos(... cos(2  cos(1))...))*/
	std::cout << "Программа 4 запущена.\n";

	int n;
	cin >> n;
	cout << func(n) << endl;
}

int main()
{
	int choice;
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	while (true) {
		std::cout << "Введите номер программы для запуска (1-5) или 0 для выхода:\n";
		std::cin >> choice;

		switch (choice) {
		case 1:
			program1();
			break;
		case 2:
			program2();
			break;
		case 3:
			program3();
			break;
		case 4:
			program4();
			break;
		case 5:
			program5();
			break;
		case 0:
			std::cout << "Выход из программы.\n";
			return 0;
		default:
			std::cout << "Неверный выбор. Пожалуйста, введите число от 1 до 4.\n";
		}
	}

	return 0;
}
