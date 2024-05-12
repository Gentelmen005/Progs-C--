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
	/*Создать функцию типа void для поиска min и его номера в массиве.
	В главной программе Даны три вектора (массива) x(n),y(n),z(n).
	Вызвать 3 раза функцию типа void.
	Далее Если наименьший элемент вектора x положителен и находится в о 2-ой половине
	этого вектора и если в векторе z наименьший элемент равен 8, тогда все элементы вектора y ,
	предыдущие перед его наименьшим элементом, заменить на 1.*/

	std::cout << "Программа 1 запущена.\n";

	int n;
	cout << "Введите размер векторов: ";
	cin >> n;
	cout << endl;

	vector <int> x(n);
	int nomx, minx;
	In_data(x, n);
	cout << "Масиив x: " << endl;

	Print(x, n);
	cout << endl;
	Min(x, n, nomx, minx);
	cout << "Наименьший эл. = " << minx << endl << "Номер в массиве = " << nomx << endl << endl;


	vector <int> y(n);
	int nomy, miny;
	In_data(y, n);
	cout << "Масиив y: " << endl;
	Print(y, n);
	cout << endl;
	Min(y, n, nomy, miny);
	cout << "Наименьший эл. = " << miny << endl << "Номер в массиве = " << nomy << endl << endl;


	vector <int> z(n);
	int nomz, minz;
	In_data(z, n);
	cout << "Масиив z: " << endl;
	Print(z, n);
	cout << endl;
	Min(z, n, nomz, minz);
	cout << "Наименьший эл. = " << minz << endl << "Номер в массиве = " << nomz << endl << endl;


	if (minx >= 0 && nomx >= n / 2 && minz == 8)
	{
		cout << "Условие выполненно ";
		for (int i = 0; i < nomy; i++)
		{
			y[i] = 1;
		}
		cout << "Вектор y: ";
		Print(y, n);
	}
	else
	{
		cout << "Не получилось :((";
	}

}

void program2()
{
	/*Описать две функции типа void сортировки одномерного массива длинной N по убыванию и по возрастанию
	Дано два массива а и в. Отсортировать а по возрастанию, в – по убыванию.
	Логической переменной t присвоить true, если наименьший элемент а больше наибольшего элемента в.*/
	std::cout << "Программа 2 запущена.\n";

	int n, mina, maxb;
	cout << "Введите размер массива: ";
	cin >> n;
	cout << endl;

	int* a = new int[n];
	int* b = new int[n];
	In_data(a, n);
	In_data(b, n);

	cout << "Массив a = ";
	Print(a, n);
	cout << endl;

	cout << "Массив b = ";
	Print(b, n);
	cout << endl;

	Sort_increases(a, n);
	Sort_decrease(b, n);

	cout << "Отсортированный по возрастанию массив a = ";
	Print(a, n);
	cout << endl;

	cout << "Отсортированный по убыванию массив b = ";
	Print(b, n);
	cout << endl;

	bool t;
	Min(a, n, mina);
	Max(b, n, maxb);

	if (mina > maxb)
	{
		t = true;
	}
	else
	{
		t = false;
	}

	cout << "Наименьший элемент массива a = " << mina << " ;" << endl;
	cout << "Наибольший элемент массива b = " << maxb << " ;" << endl;
	cout << " t = " << t;

}

void program3()
{
	/*Создать комбинированный (структурный) тип для расписания движения поездов
	(станция отправления, станция прибытия, время прибытия, время в пути).
	Описать процедуру сортировки комбинированного массива по названию станции отправления для одного массива.
	Пользователь задает два комбинированных массива по N элементов в каждом.
	( для электричек и поездов дальнего следования). Применить функцию два раза для заданных двух списков.
	. (Так же будет уместно описать процедуру ввода комбинированного массива и процедуру вывода.)*/
	std::cout << "Программа 3 запущена.\n";

	int count;
	cout << "Введите размер массива: ";
	cin >> count;
	cout << endl;

	Train* trains = new Train[count];
	Train* electric = new Train[count];

	cout << "Ввод данных для расписания движения поездов: " << endl;
	In_Data(trains, count);
	cout << "Ввод данных для расписания движения электричек: " << endl;
	In_Data(electric, count);
	cout << endl;

	cout << "Расписание движения поездов: " << endl;
	Print(trains, count);
	cout << endl;

	cout << "Расписание движения электричек: " << endl;
	Print(electric, count);
	cout << endl;

	Sort(trains, count);
	Sort(electric, count);

	cout << "Расписание движения поездов после сортировки: " << endl;
	Print(trains, count);
	cout << endl;

	cout << "Расписание движения электричек после сортировки: " << endl;
	Print(electric, count);
	cout << endl;

}

void program4()
{
	/*Описать функцию типа void поиска минимального элемента и его номера в заданной строке матрицы. 
	(номер строки – входной параметр) В главной программе Даны две матрицы A(), B().
	Поменять местами минимальные элементы в первых строках данных матриц.*/
	std::cout << "Программа 4 запущена.\n";

	int** a, ** b;
	size_t n;
	cout << "Размер матрицы: ";
	cin >> n;

	srand((int)time(nullptr));

	a = new int* [n];
	b = new int* [n];

	for (size_t i = 0; i < n; ++i)
	{
		a[i] = new int[n];
		b[i] = new int[n];

		for (size_t j = 0; j < n; ++j)
		{
			a[i][j] = rand() % 99;
			b[i][j] = rand() % 99;
		}
	}

	cout << "Вывод матрицы:" << endl;
	cout << "Матрица a:" << endl;
	printMatrix(a, n);
	cout << "Матрица b:" << endl;
	printMatrix(b, n);

	int valueA = a[0][0], valueB = b[0][0];
	size_t indexA = 0, indexB = 0;
	size_t row = 0;
	//cout<<"enter column:";
	//cin>>col;

	getMatrixColumnMin(a, n, row, indexA, valueA);
	getMatrixColumnMin(b, n, row, indexB, valueB);

	cout << "matrix A, min = " << valueA << " index = " << indexA + 1 << endl;
	cout << "matrix B, min = " << valueB << " index = " << indexB + 1 << endl;

	a[row][indexA] = valueB;
	b[row][indexB] = valueA;

	cout << endl << "matrix after swap" << endl;
	printMatrix(a, n);
	printMatrix(b, n);

	for (size_t r = 0; r < n; ++r)
	{
		delete[] a[r];
		delete[] b[r];
	}
	delete[] a;
	delete[] b;
}

int main()
{
	int choice;
	srand(time(nullptr));
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




