#include <iostream>
#include <windows.h>
#include <time.h>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h> 
#include <string>
#include <cstring>
#include <conio.h>

using namespace std;

void program1() 
{
    /*Даны два слова. (две переменные).
    Сколько раз во втором слове встречается первая буква первого слова. (не использовать find, erase, substr…)*/
    std::cout << "Программа 1 запущена.\n";

    string str1, str2;
    cout << "Первое слово = ";
    getline(cin, str1);

    cout << "Второе слово = ";
    getline(cin, str2);

    str1;
    int n = 0;

    for (int i = 0; i < str2.size(); i++)
    {
        if (str1[0] == str2[i])
        {
            n++;
        }
    }

    cout << "Вывод:" << n;
}

void program2() 
{
    /*Даны 3 слова - ваши Имя, Отчество, Фамилия в 3 - х разных переменных.
    Образовать новую символьную переменную, хранящую только ваши инициалы(через точку и пробел). 
    (использовать склейку « + »)(не использовать find, erase, substr…)*/
    std::cout << "Программа 2 запущена.\n";
   
    string name = "Иван";
    string patronymic = "Иванович";
    string surname = "Иванов";

   
    string initials = name[0] + string(". ") + patronymic[0] + string(". ") + surname[0] + string(".");

    cout << "Инициалы: " << initials << endl;
}

void program3() 
{
    /*Имеется некоторая последовательность символов.
    Образовать новую последовательность, включив в нее символы исходной, кроме символов «g» и «v». 
    (использовать склейку « + »)(не использовать find, erase, substr…)*/
    std::cout << "Программа 3 запущена.\n";

    string Text, Text1;
    cout << "Text = ";
    getline(cin, Text);

    for (int i = 0; i < Text.size(); i++)
    {
        if (Text[i] != 'A' && Text[i] != 'v')
        {

            Text1 = Text1 + Text[i];

        }
    }

    cout << "Text1 = " << Text1;

}

void program4() 
{
    /*Имеется некоторый текст.
    Образовать из него новый, в который включить информацию, заключенную между пробелом и запятой.
    (не использовать find)*/

    std::cout << "Программа 4 запущена.\n";
    string Text, Text1;
    cout << "Text = ";
    getline(cin, Text);
    string Temp;

    for (int i = 0; i < Text.size(); i++)
    {

        Temp = Text1;
        if (Text[i] == '\0')// если конец строки
        {
            Text1 = Temp;
            break;
        }

        if (Text[i] == ' ')// если встретил ПРОБЕЛ
        {
            i++;
            if (Text[i] == '\0')
            {
                Text1 = Temp;
                break;
            }

            while (Text[i] != ',')
            {
                Text1 = Text1 + Text[i];
                i++;
                if (Text[i] == ' ')
                {
                    Text1 = Temp;
                    i--;
                    break;
                }
                else if (Text[i] == '\0')
                {
                    Text1 = Temp;
                    break;
                }
            }

            if (Text[i] == ' ' && Text[i - 1] == ',' || Text[i] == ',' && Text[i - 1] == ' ')
            {
                Text1 = Text1 + " null ";
            }
        }
        else if (Text[i] == ',')// если встретил ЗАПЯТУЮ
        {
            i++;
            if (Text[i] == '\0')
            {
                Text1 = Temp;
                break;
            }
            while (Text[i] != ' ')
            {
                Text1 = Text1 + Text[i];
                i++;
                if (Text[i] == ',')
                {
                    Text1 = Temp;
                    i--;
                    break;
                }
                else if (Text[i] == '\0')
                {
                    Text1 = Temp;
                    break;
                }
            }

            if (Text[i] == ' ' && Text[i - 1] == ',' || Text[i] == ',' && Text[i - 1] == ' ')// если между 
            {                                                                        // запятой и пробелом                 
                Text1 = Text1 + "null";                                              // ничего нет
            }
        }
    }

    if (!Text1[0])// если только ЗАПЯТЫЕ или ПРОБЕЛЫ
    {
        cout << "Ничего нет :(";
    }
    cout << "Text1 = " << Text1;
}

int main() 
{
    int choice;
    setlocale(LC_ALL, "Russian");

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
