#include <iostream>
#include <string>
#include <iomanip>
#include <Windows.h>
#include "Struct.h"

using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    list l;
    library a, b;

    a.FIO_aftor = "A1";
    a.number_of_instances = 55;
    a.number_udk = 99;
    a.title = "s1";
    a.year_of_publication = 1999;

    int count;
    int k = 1;

    b.FIO_aftor = "A2";
    b.number_of_instances = 55;
    b.number_udk = 99;
    b.title = "s2";
    b.year_of_publication = 1999;

    while (k != 0)
    {
        cout << "Нажмите \n 1 чтобы добавить книгу\n 2 чтобы удалить кингу\n 3 чтобы добавить вначало\n 4 чтобы добавить в конец\n 0 чтобы выйти из интерфейса:\n";
        cin >> k;
        switch (k)
        {
        case 1:
            cout << "Напишите название книги:\n";
            cin >> a.title;
            cout << "Напишите ФИО автора\n";
            cin >> a.FIO_aftor;
            cout << "Напишите УДК\n";
            cin >> a.number_udk;
            cout << "Напиште год издания\n";
            cin >> a.year_of_publication;
            cout << "Напишите количество экземпляров данной книги в библиотеке\n";
            cin >> a.number_of_instances;
            l.push_back(a);
            l.print();
            break;
        case 2:
            cout << "Напишите номер позиции книги:\n";
            cin >> count;
            l.deleteNode(count - 1);
            l.print();
            break;
        case 3:
            cout << "Напишите название книги:\n";
            cin >> a.title;
            cout << "Напишите ФИО автора\n";
            cin >> a.FIO_aftor;
            cout << "Напишите УДК\n";
            cin >> a.number_udk;
            cout << "Напиште год издания\n";
            cin >> a.year_of_publication;
            cout << "Напишите количество экземпляров данной книги в библиотеке\n";
            cin >> a.number_of_instances;
            l.push_head(a);
            l.print();
            break;
        case 4:
            cout << "Напишите название книги:\n";
            cin >> a.title;
            cout << "Напишите ФИО автора\n";
            cin >> a.FIO_aftor;
            cout << "Напишите УДК\n";
            cin >> a.number_udk;
            cout << "Напиште год издания\n";
            cin >> a.year_of_publication;
            cout << "Напишите количество экземпляров данной книги в библиотеке\n";
            cin >> a.number_of_instances;
            l.push_back(a);
            l.print();
            break;
        default:
            break;
        }
    }


    return 0;
}
