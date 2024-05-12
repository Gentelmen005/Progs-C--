#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include <iostream>
#include <windows.h>
#include <algorithm>
#include <vector>


using namespace std;

void program1()
{
	/*Задан список из десяти городов. (массив [.] string)
	Подсчитать количество названий, которые оканчиваются буквой «В».*/
	std::cout << "Программа 1 запущена.\n";

	const int count = 10;
	int col = 0;
	string towns[count];

	cout << "Ввод городов на латинице." << endl;
	for (int i = 0; i < count; i++)
	{
		cout << "\t -город №" << (i + 1) << ": ";
		cin.get();
		getline(cin, towns[i]);
	}

	char word;
	cout << "Введи букву: ";
	cin >> word;


	for (int i = 0; i < count; i++)
	{
		char t = towns[i][size(towns[i]) - 1];
		if (t == word)
		{
			col++;
		}
	}


	cout << " Кол-во: " << col;
}

void program2()
{
	/*Задан список из 5 имен девочек. (массив [.] string).
	Присвоить переменной d имя с наименьшим числом букв.*/
	std::cout << "Программа 2 запущена.\n";

	const int count = 5;
	string t;
	int p;
	string names[count];
	string d[count];

	cout << "Ввод имен на латиницe." << endl;
	for (int i = 0; i < count; i++)
	{
		cout << "\t -Имя №" << (i + 1) << ": ";
		cin.get();
		getline(cin, names[i]);
	}

	d[0] = names[0];
	int j = 1;
	for (int i = 1; i < count; i++)
	{
		if (names[i].size() <= d[0].size())
		{

			if (names[i].size() < d[0].size())
			{
				memset(d, 0, sizeof(count));
				j = 0;
				d[j] = names[i];
				j++;
			}
			else
				if (names[i].size() == d[0].size())
				{

					d[j] = names[i];
					j++;
				}
		}

	}
	cout << "Наименьшее: ";
	for (int i = 0; i < count; i++)
	{
		if (d[i] != "\0")
		{
			cout << d[i] + ",";
		}
	}

}

void program3()
{
	/*Задан список из десяти городов. (массив [.] string).
	Подсчитать количество названий, в которых есть по две буквы «а»*/
	std::cout << "Программа 3 запущена.\n";

	const int count = 10;
	string towns[count];
	cout << "Ввод городов на латиницe." << endl;

	for (int i = 0; i < count; i++)
	{
		cout << "\t -Город №" << (i + 1) << ": ";
		getline(cin, towns[i]);
	}

	const char T = 'a';

	int  col_t = 0;
	for (int i = 0; i < count; i++)
	{
		int  col_g = 0;
		for (int j = 0; j < towns[i].size(); j++)
		{
			if (towns[i][j] == T)
			{
				col_g++;
			}
		}
		if (col_g == 2)
		{
			col_t++;
		}
	}

	cout << "Кол-во городов " << col_t;

}

void program4()
{
	/*Дан список фамилий сотрудников. (массив [.] string).
	Переписать в другой список только фамилии, чья длина больше 7 букв. Затем упорядочить по алфавиту второй список.*/
	std::cout << "Программа 4 запущена.\n";

	const int count = 10;

	string fam[count];
	cout << "Ввод фамилий на латиницe." << endl;

	for (int i = 0; i < count; i++)
	{
		cout << "\t -Фамилие №" << (i + 1) << ": ";
		getline(cin, fam[i]);
	}

	vector <string> fam_2;

	for (int i = 0; i < count; i++)
	{
		if (fam[i].size() > 7)
		{
			fam_2.push_back(fam[i]);
		}
	}

	sort(fam_2.begin(), fam_2.end());

	cout << endl << "Список отсортированных городов";

	for (int i = 0; i < fam_2.size(); i++)
	{
		cout << "\t" << fam_2[i] << endl;
	}
}

int main()
{
	int choice;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Rus");


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



