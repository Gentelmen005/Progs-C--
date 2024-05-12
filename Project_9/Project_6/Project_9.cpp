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
	/*Создать функцию типа void с передачей параметров по ссылке или указателю, которая переводит время,
	заданное в минутах в секунды. . Для создаваемой функции: подобрать имя;
	выбрать имена и типы входных и выходных параметров; описать тело функции;
	в главной программе вызвать созданную подпрограмму более одного раза с различными входными данными.
	Вывести результаты в главной программе.*/

	std::cout << "Программа 1 запущена.\n";

	bool c = 1;


	while (c == 1)
	{
		int a;

		cout << "Введите время(минуты) a: ";
		cin >> a;
		Minut(a);
		cout << "Время в секундах: " << a << endl;

		cout << "Если хотите продолжить введите 1, если закончить то 0: ";
		cin >> c;
	}

}

void program2()
{
	/*Реализовать функцию типа void с передачей параметров-результатов по ссылке.
	Функция вычисляет характеристики параллелограмма по заданным двум сторонам и углу между ними.
	Выходные результаты функции – характеристики параллелограмма – это периметр и площадь s= a b Cos α.
	В главной программе задано два параллелограмма. Найти их характеристики, вызвав функцию 2 раза.*/
	std::cout << "Программа 2 запущена.\n";

	int c = 1;
	int a, b;
	int P, S;

	while (c == 1)
	{
		cout << "Введите стороны параллелограмма:" << endl;
		cout << "a = ";
		cin >> a;
		cout << "b = ";
		cin >> b;

		Paral(a, b, P, S);
		cout << "Периметр:" << P << endl;
		cout << "Площадь:" << S << endl;

		cout << "Если хотите продолжить введите 1, если закончить то 0: ";
		cin >> c;
	}


}

void program3()
{
	/*Описать функцию типа void с передачей параметров по ссылке или
	указателю POWERA3(A,B), вычисляющую третью степень числа А и возвращающую ее
	в переменной В (А — входной, В — выходной параметр; оба параметра являются
	вещественными). С помощью этой функции найти третьи степени пяти данных чисел.*/
	std::cout << "Программа 3 запущена.\n";

	int c = 1;
	float A, B;

	while (c == 1)
	{
		cout << "Введите число A:";
		cin >> A;

		POWERA3(A, B);
		cout << "Число в степени 3 равна = " << B << endl;

		cout << "Если хотите продолжить введите 1, если закончить то 0: ";
		cin >> c;
	}

}

void program4()
{
	/*Описать подпрограмму-функцию типа void с передачей параметров по ссылке
	или указателю, переводящую декартовы координаты заданной точки (x,y,z) в
	цилиндрические координаты по следующим формулам: ...(формула)....
	Входные параметры: (x,y,z), выходные параметры (по
	ссылке или указателю): ρ,  , z2. В главной программе для двух заданных точек найти
	их цилиндрические координаты и найти сумму их углов 1 2   и разность радиус
	векторов 2.*/
	std::cout << "Программа 4 запущена.\n";

	int x, y, z, x2, y2, z2 =0 , p, p2, f, f2, z2_1, z2_2;

	cout << "Ввод декартовых координат для 1 точки:" << endl;

	cout << "x = ";
	cin >> x;
	cout << endl;

	cout << "y = ";
	cin >> y;
	cout << endl;

	cout << "z = ";
	cin >> z;
	cout << endl;

	Cilindr(x, y, z, p, f, z2_1);

	cout << "p = " << p << endl;
	cout << "f = " << f << endl;
	cout << "z2 = " << z2 << endl;


	cout << "Ввод декартовых координат для 2 точки:" << endl;
	cout << "x2 = ";
	cin >> x2;
	cout << endl;

	cout << "y2 = ";
	cin >> y2;
	cout << endl;

	cout << "z2 = ";
	cin >> z2;
	cout << endl;

	Cilindr(x2, y2, z2, p2, f2, z2_2);

	cout << "p2 = " << p2 << endl;
	cout << "f2 = " << f2 << endl;
	cout << "z2 = " << z2 << endl;

	cout << "Сумма углов = ";
	int sum = f + f2;
	cin >> sum;
	cout << endl;

	cout << "Разность радиус векторов = ";
	int raz = p - p2;
	cin >> raz;
	cout << endl;


}

void program5()
{
	/*Дано 3 квадратные матрицы А,В и С. 
	Вычислить квадрат той матрицы (А*А), в которой след наименьший. 
	Вычисление следа оформить в виде функции. Вычисление квадрата матрицы оформить в виде процедуры.
	(След матрицы – это сумма элементов главной диагонали)*/
	std::cout << "Программа 4 запущена.\n";
	
	const size_t m = 5;
	double** A = new double* [m];
	double** B = new double* [m];
	double** C = new double* [m];

	cout << "Матрица A:" << endl;
	In_data(A, m);
	Print(A, m);
	cout << endl;

	cout << "Матрица B:" << endl;
	In_data(B, m);
	Print(B, m);
	cout << endl;

	cout << "Матрица C:" << endl;
	In_data(C, m);
	Print(C, m);
	cout << endl;

	int* sum = new int[2];
	sum[0] = Sled_sum(A, m);
	sum[1] = Sled_sum(B, m);
	sum[2] = Sled_sum(C, m);
	cout << "След матрицы A = " << sum[0] << endl << "След матрицы B = " << sum[1] << endl
		<< "След матрицы C = " << sum[2] << endl << endl;

	auto min = min_element(sum, sum + 2);
	cout << "Наименьй след = " << *min << endl;

	double** Z = new double* [m];
	for (int i = 0; i < m; i++)
	{
		Z[i] = new double[m];
		for (int j = 0; j < m; j++)
		{
			Z[i][j] = 0;
		}
	}

	if (*min == sum[0])
	{
		Matrix_square(A, Z, m);
		Print(Z, m);
	}
	else if (*min == sum[1])
	{
		Matrix_square(B, Z, m);
		Print(Z, m);
	}
	else
	{
		Matrix_square(C, Z, m);
		Print(Z, m);
	}

}

int main()
{
	int choice;
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));


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



