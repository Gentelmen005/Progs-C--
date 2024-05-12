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
    /*Пользователь вводит текст.
    Вычислить количество слов начинающих на «м».
    Количество слов «Компьютер» или «компьютер», а также количество предложений.*/
    std::cout << "Программа 1 запущена.\n";

	string words[2] = { "Computer","computer" };
	int col, predl, Y;
	Y = 0;
	col = 0;
	predl = 0;
	char alp;
	string text, text1;

	cout << "text = ";
	cin.get();
	getline(cin, text);

	cout << "Введи букву для поиска =  ";
	cin >> alp;

	for (int i = 0; i < text.size(); i++)
	{

		if (text[0] == ' ')// удаляем вначале пробел, если он есть
		{
			text.erase(0, 1);
		}

		text1 = text1 + text[i];
		for (auto task : words)
		{
			if (task == text1)
			{
				Y++;
				text1 = "";
			}
		}

		if (text[0] == alp)// ищем слово с начальной буквой заданой alp
		{
			col++;
			while (text[i] != ' ')// пока нет пробела или точки проходим все слово
			{
				i++;
				text1 = text1 + text[i];
				if (text[i] == '.')// если точка то слово закончилось и очищаем от лишнего
				{
					text1.erase(i, 1);
					for (auto task : words)
					{
						if (task == text1)
						{
							Y++;
						}
					}
					predl++;
					text.erase(0, i + 1);
					i = 0;
					break;
				}
			}
			if (text[i] == ' ')
			{
				text.erase(0, i);
				i = 0;
				if (text[i + 1] == '.')
				{
					predl++;
					text.erase(0, i);
					i = 0;
					break;
				}

			}
		}

		if (text[i] == '.')
		{
			predl++;
			text.erase(0, i + 1);
			i = 0;
		}
	}

	cout << "Количество слов = " << col << endl;
	cout << "Количество предложений = " << predl << endl;
	cout << "Количество слов компьютер = " << Y << endl;
    
}

void program2() 
{
    /*Исходный текст набран с ошибками : иногда отсутствуют пробелы после точек.
    Вставить 1 пробел после каждой точки, если он отсутствует перед следующим предложением.
    А также вычислить количество слов и предложений.
    (не использовать find)*/
    std::cout << "Программа 2 запущена.\n";

	string text;
	const string probel = " ";
	cout << "Текст = ";
	cin.get();
	getline(cin, text);
	int  i = 0;
	int col = 0;
	int predl = 0;
	if (text[0] == ' ')// удаляем вначале пробел, если он есть
	{
		text.erase(0, 1);
	}

	while (i < text.size())
	{

		if (text[i] == ' ')
		{
			col++;

		}

		if (text[i] == '.' && text[i + 1] != ' ')
		{
			text.insert(i + 1, probel);
			predl++;
			col++;
			i++;
		}
		else if (text[i] == '.')
		{
			predl++;
		}
		i++;
	}



	cout << "Исправленный текст = " << text << endl;
	cout << "Количество слов = " << col << endl;
	cout << "Количество предложений = " << predl << endl;

    
}

void program3() 
{
    /*Дана строка текста.Упорядочить по возрастанию символы,
    расположенные между первым элементом равным ‘ ? ’ и последним элементом равным ‘!”.
    Предварительно найти, где они находятся.*/
    std::cout << "Программа 3 запущена.\n";

	string text;
	cout << "Текст = ";
	cin.get();
	getline(cin, text);

	const char first = '?';
	const char last = '!';

	int firstind, lastind;

	firstind = text.find_first_of(first);
	lastind = text.find_last_of(last);

	if (firstind == -1 || lastind == -1)
	{
		cout << "Нет символов ? и !. " << endl;
	}
	else
	{
		if (firstind > lastind)
		{
			swap(firstind, lastind);
		}
	}

	sort(text.begin() + firstind + 1, text.begin() + lastind);

	cout << "Отсортированный  текст = " << text << endl;
   
}

void program4() 
{
    /*Даны две строки текста.Определить сколько раз встречается каждый символ первой строки во второй строке.Например: 
    Пусть исходная строка Str1 : = “xyz”; Str2: “x a d c x y x w”.
    Тогда “х” – встречается 3 раза “y” - встречается 1 раз, “z” - встречается 0 раз.*/
    std::cout << "Программа 4 запущена.\n";
    
	
	string text1;
	cout << "Первый текст = ";
	cin.get();
	getline(cin, text1);
	string text2;
	cout << "Второй текст = ";
	cin.get();
	getline(cin, text2);

	for (auto cel1 : text1)
	{
		size_t count = 0;
		for (auto cel2 : text2)
		{
			if (cel1 == cel2)
			{
				count++;
			}
		}
		cout << cel1 << " : " << count << " раз " << endl;
	}

}

int main() 
{
    int choice;
    setlocale(LC_ALL, "Russian");
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

