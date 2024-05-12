#include <iostream>
#include <iomanip>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <math.h>
#include <stdio.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include <fstream>


using namespace std;

void program1()
{
	/*Дан файл вещественных чисел a.txt Найти количество отрицательных и количество положительных элементов.*/

	ifstream fp;
	int n = 0;
	double s = 0;
	float a;
	fp.open("a1.txt");
	if (fp)
	{
		while (!fp.eof())
		{
			fp >> a;
			if (a < 0)
			{
				n++;
			}
			if (a > 0)
			{
				s++;
			}
		}
		fp.close();
		cout << "Кол-во отриц. чисел=" << n << endl;
		cout << "Кол-во положит. чисел=" << s << endl;
	}
}

void program2()
{
	/*Дано 2 файла вещественных чисел а1.txt и а2.txt. Найти сумму положительных элементов в двух файлов.*/
	std::cout << "Программа 2 запущена.\n";

	ifstream a1, a2;
	float s = 0;
	float a;
	a1.open("a1.txt");
	a2.open("a2.txt");

	if (a1 && a2)
	{
		while (!a1.eof() && !a2.eof())
		{
			a1 >> a;
			if (a > 0)
			{
				s = s + a;
			}

			a2 >> a;
			if (a > 0)
			{
				s = s + a;
			}
		}
		a1.close();
		a2.close();
	}
	cout << "Сумма положит. чисел = " << s << endl;

}

void program3()
{
	/*Организовать текстовый файл. Заменить в файле все маленькие латинские буквы на большие.
	(создавая новый дополнительный файл)*/
	std::cout << "Программа 3 запущена.\n";

	char ch;

	ofstream a1, a2;
	ifstream b1, b2;

	b1.open("new1.txt");
	a2.open("new2.txt");

	while (b1 >> ch)
	{
		//b1 >> ch;         
		if (islower(ch))
		{
			ch = toupper(ch);

		}
		a2 << ch;
	}
	b1.close();
	a2.close();

	b2.open("new2.txt");

	while (b2 >> ch)
	{
		//b2 >> ch;
		putchar(ch);
	}
	b2.close();

	_getch();

}

void program4()
{
	/*Организовать файл целых чисел. В новый файл записать элементы файла занимающие нечётные позиции,
	в другой новый файл элементы файла занимающие чётные позиции.*/
	cout << "Программа 4 запущена.\n";

	const int len = 1024;

	ofstream  h("2.txt"), g("3.txt");
	ifstream f("1.txt");

	char str[len];
	for (int i = 0; f >> str; i++)
	{
		if (i % 2 == 0)
		{
			h << str;
		}
		else
		{
			g << str;
		}
	}
	cout << "Просмотрите содержимое файлов 2.txt и 3.txt\n";
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
