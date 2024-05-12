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
	/*Определить комбинированный (структурный) тип для представления анкеты ребенка, состоящей из его имени, пола и роста. 
	Ввести информацию по 20 детям. Вывести средний рост мальчиков*/
	std::cout << "Программа 1 запущена.\n";
	const size_t count = 3;
	AnkC children[count];// информация о детях

	cout << "Ввод информации о детях" << endl;

	for (int i = 0; i < count; i++)
	{
		fflush(stdin);

		cout << "\t  № " << (i + 1) << endl;
		cout << "\t - введите имя: ";
		cin >> children[i].name;

		cout << "\t - введите пол: ";
		cin >> children[i].sex;

		cout << "\t - введите рост: ";
		cin >> children[i].height;
		cout << endl;
		fflush(stdin);
	}

	Print(children, count);
	cout << "Средний возраст всех детей: " << setprecision(2) << fixed << average(children, count) << endl;
}

void program2()
{
	/*Определить комбинированный (структурный) тип, описывающий окружность и состоящий из двух полей: «радиус» и «центр». 
	Поле «центр» в свою очередь состоит еще из двух полей: «координата X» и «координата Y». Ввести информацию по 10 окружностям. 
	Вывести координаты центра окружности, чей радиус самой большой.*/
	std::cout << "Программа 2 запущена.\n";

	const size_t count = 2;
	Circle circles[count];

	cout << "Ввод данных: " << endl;

	for (int i = 0; i < count; i++)
	{
		cout << "\t Окружность № " << (i + 1) << endl;

		cout << "\t\t - Радиус: ";
		cin >> circles[i].r;

		cout << "\t\t - Координаты центра x и y: ";
		cin >> circles[i].center.x >> circles[i].center.y;
		cout << endl;
	}

	Print(circles, count);
	int index_circle = Index_circle(circles, count);

	cout << endl << "Окружность №" << (index_circle + 1) << " с радиусом = " << circles[index_circle].r << " максимально удалена от начала координат." << endl;

}

void program3()
{
	/*Определить комбинированный (структурный) тип для представления анкеты жителя, состоящей из его фамилии, 
	названия города, где он проживает, и городского адреса. 
	Адрес состоит из полей: «улица», «дом», «квартира». Ввести информацию по 10 жителям. 
	Переписать из исходного массива в другой массив, информацию только о тех жителях, которые живут в Москве.*/
	std::cout << "Программа 3 запущена.\n";

	const size_t count = 2;
	Ank* ankets = new Ank[count];
	int k = 0;

	cout << "Ввод данных: " << endl;

	for (int i = 0; i < count; i++)
	{
		cout << "\t Анкета жителя № " << (i + 1) << endl;

		cout << "\t\t - Ф.И.О: ";
		cin >> ankets[i].fio.last_name >> ankets[i].fio.first_name >> ankets[i].fio.patronymic;

		cout << "\t\t - Город: ";
		cin >> ankets[i].city;

		if (ankets[i].city == "Москва")
		{
			k++;
		}

		cout << "\t\t - Адрес(улица, дом, квартира):";
		cin >> ankets[i].address.street >> ankets[i].address.home >> ankets[i].address.flat;
	}

	cout << "Исходный массив" << endl;
	Print(ankets, count);
	cout << endl;

	// Подсчет количества жителей из Москвы и создание массива ankets2
	Ank* ankets2 = new Ank[k];
	int t = 0;
	for (int i = 0; i < count; i++)
	{
		if (ankets[i].city == "Москва")
		{
			ankets2[t] = ankets[i];
			t++;
		}
	}

	cout << "Массив с жителями только из Москвы" << endl;
	Print(ankets2, k);

	// Освобождение динамически выделенной памяти
	delete[] ankets;
	delete[] ankets2;


}

void program4()
{
	/*Определить структурный тип, описывающий гостиничный 
	номер (название гостиницы, номер, комфортность (люкс, полулюкс стандарт, эконом), количество человек, стоимость).
	Заполнить структурный массив 10-ю записями. 
	Переписать из исходного массива в другой массив, информацию только о тех гостиничных номерах, 
	название гостиницы которых начинается с сочетания букв «City». Затем новый массив отсортировать по номеру.
	(рационально переставлять все поля структуры разом )*/
	std::cout << "Программа 4 запущена.\n";

	const size_t count = 3;
	Gost* gosts = new Gost[count];

	cout << "Ввод данных: " << endl;

	for (int i = 0; i < count; i++)
	{
		cout << "\t\t Гостин. номер № " << (i + 1) << endl;

		cout << "\t\t - Название: ";
		cin >> gosts[i].name_gost;

		cout << "\t\t - Номер: ";
		cin >> gosts[i].nomer;

		cout << "\t\t - Комфортность(люкс, полулюкс, стандарт, эконом):";
		cin >> gosts[i].comfort;

		cout << "\t\t - Кол-во человек: ";
		cin >> gosts[i].num;

		cout << "\t\t - Стоимость: ";
		cin >> gosts[i].cost;
		cout << endl;
	}

	Print(gosts, count);
	cout << endl;

	int count_city = Get_coount_city(gosts, count);
	cout << count_city << endl;

	Gost* gosts2 = new Gost[count_city];

	Add_sort(gosts, gosts2, count, count_city);
	Print(gosts2, count_city);
	cout << endl;

	// Освобождение динамически выделенной памяти
	delete[] gosts;
	delete[] gosts2;

}

void program5()
{
	/*Определить комбинированный (структурный) тип для представления информации по горным вершинам,
	состоящей из названия вершины и ее высоты. Ввести информацию по 20 вершинам.
	Вывести среднее значение высот всех 20 вершин. Затем вывести информацию,
	отсортированную по возрастанию высоты вершины. (рационально переставлять все поля структуры разом )*/
	std::cout << "Программа 4 запущена.\n";

	const size_t count = 3;

	Mount mounts[count];

	cout << "Ввод данных: " << endl;

	for (int i = 0; i < count; i++)
	{
		cout << "\t\t Горная вершина № " << (i + 1) << endl;

		cout << "\t\t - Название: ";
		cin >> mounts[i].name;

		cout << "\t\t - Высота: ";
		cin >> mounts[i].height;

		cout << endl;
	}

	Print(mounts, count);
	cout << endl;

	cout << "Средний значение высот: " << setprecision(3) << fixed << Get_averable_height(mounts, count) << endl << endl;

	Sort(mounts, count);
	Print(mounts, count);
	cout << endl;



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



