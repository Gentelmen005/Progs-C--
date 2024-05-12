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


using namespace std;

void program1()
{
	/*Создать функцию, которая возвращает меньшее из двух данных чисел. 
	Для создаваемой функции: подобрать имя; указать тип функции; 
	выбрать имена и типы входных параметров; описать тело функции с обязательным оператором в конце; 
	в главной программе вызвать созданную функцию два раза с различными входными данными. 
	Вывести результаты в главной программе.*/
	std::cout << "Программа 1 запущена.\n";

	double a, b;

	cout << "Ввод двух чисел (через проблем)";
	cin >> a >> b;

	cout << "Минимальное число из двух данных: = ";
	cout << Get_min(a, b);

	cout << endl;
	cout << "Ввод двух чисел (через проблем)";
	cin >> a >> b;

	cout << "Минимальное число из двух данных: = ";
	cout << Get_min(a, b);

}

void program2()
{
	/*Реализовать функцию. Функция вычисляет площадь параллелограмма s= a b Cos α по заданным двум сторонам и углу между ними.
	В главной программе задано два параллелограмма. Найти их площади, вызвав функцию 2 раза.*/
	std::cout << "Программа 2 запущена.\n";

	double a, b;
	cout << setprecision(3) << fixed;

	cout << "Параллелограмм №1: " << endl;
	cout << "a:";
	cin >> a;
	cout << "b:";
	cin >> b;

	cout << "Площадь gараллелограмм : " << fixed << Get_square(a, b) << endl << endl;

	cout << "Параллелограмм №2: " << endl;
	cout << "a:";
	cin >> a;
	cout << "b:";
	cin >> b;

	cout << "Площадь gараллелограмм : " << fixed << Get_square(a, b) << endl << endl;
}

void program3()
{
	/*Описать функцию Sign(Х) целого типа, возвращающую для вещественного
      числа X его знак , то есть следующие значения:
      -1, если X<0, 0, если X=0; 1, если X>0.
     С помощью этой функции найти значение выражения Sign(A) + Sign(B) для данных
     вещественных чисел А и В.*/
	std::cout << "Программа 3 запущена.\n";

	double A, B;
	cout << "Ввод данных: ";
	cin >> A;
	cin >> B;
	cout << endl;
	cout << Sign(A) + Sign(B);
}

void program4()
{
	/*Даны действительные числа a, b, c. Получить:
      Описать функции нахождения наибольшего числа из 2 заданных величин.*/
	std::cout << "Программа 4 запущена.\n";

	float a, b, c;
	cout << setprecision(3) << fixed;
	cout << "Введи значения действ. чисел a, b, c: ";
	cin >> a >> b >> c;
	cout << "Результат: " << fixed << Get_form(a, b, c) << endl;

}

int main()
{
	int choice;
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	while (true) {
		std::cout << "Введите номер программы для запуска (1-4) или 0 для выхода:\n";
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
		case 0:
			std::cout << "Выход из программы.\n";
			return 0;
		default:
			std::cout << "Неверный выбор. Пожалуйста, введите число от 1 до 4.\n";
		}
	}

	return 0;
}



