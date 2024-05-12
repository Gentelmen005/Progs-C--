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
	/*Оформить функцию поиска количества отрицательных элементов массива. 
	В главной программе дано 3 одномерных массива a,b,c длиной 10 элементов каждый. 
	Применить функцию для каждого из 3-х заданных массивов. (в функции не должно быть операторов ввода или вывода)*/

	std::cout << "Программа 1 запущена.\n";

	const size_t size = 10;

	int a[size], b[size], c[size];
	Rand(a, size);
	Rand(b, size);
	Rand(c, size);

	Print(a, size, "Массив a: ");
	Print(b, size, "Массив b: ");
	Print(c, size, "Массив c: ");

	cout << endl << "Кол-во отриц. эл. массива а: " << Get_min(a, size);
	cout << endl << "Кол-во отриц. эл. массива b: " << Get_min(b, size);
	cout << endl << "Кол-во отриц. эл. массива c: " << Get_min(c, size);

	cout << endl << endl;
}

void program2()
{
	/*Оформить функцию поиска суммы элементов, стоящих на нечетных местах (использовать шаг цикла ≠1 ),
	В главной программе дано 3 одномерных массива a,b,c длиной 30 элементов каждый.
	Применить функцию для каждого из 3-х заданных массивов. Найти произведение найденных сумм элементов.
	(в функции не должно быть операторов ввода или вывода)*/
	std::cout << "Программа 2 запущена.\n";

	const size_t size = 30;

	int a[size], b[size], c[size];
	Rand(a, size);
	Rand(b, size);
	Rand(c, size);

	Print(a, size, "Массив a: ");
	Print(b, size, "Массив b: ");
	Print(c, size, "Массив c: ");

	int a_sum = Get_sum(a, size);
	int b_sum = Get_sum(b, size);
	int c_sum = Get_sum(c, size);

	cout << endl << "Сумма элементов на нечет. местах  в массиве a: " << a_sum;
	cout << endl << "Сумма элементов на нечет. местах  в массиве b: " << b_sum;
	cout << endl << "Сумма элементов на нечет. местах  в массиве c: " << c_sum;

	cout << endl << endl << "Произведение найденных элементов: " << (a_sum * b_sum * c_sum);

}

void program3()
{
	/*Описать функцию, вычисляющую количество появлений заданного символа в заданной строке
	(«заданные» – это входные параметры функции). В главной программе дано 2 строки символов S1 и S2.
	Выяснить, что больше количество символов ’*’ в строке S1 или количество символов ‘+’ в строке S2, используя функцию.*/
	std::cout << "Программа 3 запущена.\n";

	string s1, s2;


	cout << "Введите строку S1: ";
	getline(cin, s1);
	cout << "Введите строку S2: ";
	getline(cin, s2);


	const char STAR = '*';
	const char PLUS = '+';


	size_t star_count = Get_count(s1, STAR);
	cout << endl << "Символ \'" << STAR << "\' встречается в строке S1: " << star_count << " раз.";


	size_t plus_count = Get_count(s2, PLUS);
	cout << endl << "Символ \'" << PLUS << "\' встречается в строке S2: " << plus_count << " раз.";


	cout << endl;
	if (star_count > plus_count)
	{
		cout << endl << "Количество появлений символа \'" << STAR << "\' больше.";
	}
	else if (star_count < plus_count)
	{
		cout << endl << "Количество появлений символа \'" << PLUS << "\' больше.";
	}
	else
	{
		cout << endl << "Количество появлений символов \'" << STAR << "\' и \'" << PLUS << "\' одинаковое.";
	}

	cout << endl << endl;
}

void program4()
{
	/*Создать комбинированный (структурный) тип для сведений о периодических изданиях
	(наименование издания, тираж, годовая стоимость).
	Описать функцию нахождения общей суммы стоимостей изданий в одном таком комбинированном массиве.
	Пользователь задает два комбинированных массива по N элементов в каждом.(для двух библиотек).
	Применить функцию два раза для заданных двух библиотек.
	(Так же будет уместно описать процедуру ввода комбинированного массива и процедуру вывода.)*/
	std::cout << "Программа 4 запущена.\n";

	int n;
	cout << "Ввод кол-ва изданий ";
	cin >> n;

	Editions* edit1 = new Editions[n];
	In_data(edit1, n, 1);
	Print_data(edit1, n, "\nИнформация о изданиях в группе №1");
	cout << endl << "Сумма стоимостей изданий в 1 группе: " << Get_sum(edit1, n) << endl;

	delete[] edit1;

	Editions* edit2 = new Editions[n];
	In_data(edit2, n, 2);
	Print_data(edit2, n, "\nИнформация о изданиях в группе №2");
	cout << endl << "Сумма стоимостей изданий в 2 группе: " << Get_sum(edit2, n) << endl;

	delete[] edit2;

	cout << endl << endl;

}

void program5()
{
	/*Описать функции нахождения min в одномерном массиве и функцию
      нахождения max в одномерном массиве. Дано 3 одномерных массива a,b,c длиной 20
      элементов каждый. Использовать функции для облегчения решения задачи.
	  Вычислить...(формула)....
      где min(ai) – означает наименьший элемент из массива а.
      max(ai) – означает наибольший элемент из массива а.*/
	std::cout << "Программа 4 запущена.\n";
	
	const size_t n = 20;
	int a[n], b[n], c[n], t;

	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
		b[i] = rand() % 100;
		c[i] = rand() % 100;

		cout << a[i] << setw(5) << b[i] << setw(5) << c[i] << endl;
	}

	if (Findmin(a, n) < Findmax(b, n))
	{
		t = Findmin(b, n) * (Findmax(a, n) + Findmax(c, n));
	}
	else
	{
		if (Findmin(a, n) == 0)
		{
			cout << "\n" << "Error";
		}

		t = ((Findmin(b, n) + Findmin(c, n)) / Findmin(a, n)) + Findmax(a, n);
	}

	cout << '\n' << " \n t = " << t;




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



