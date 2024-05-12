#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <iostream>

using namespace std;



void program1() 
{
    //Ввести значение 2 - х целых переменных а и b.Направить два указателя на
    //эти переменные.С помощью указателя увеличить значение переменной а в 2 раза.Затем
    //поменять местами значения переменных а и b через их указатели.

    std::cout << "Программа 1 запущена.\n";

    double a, b;
    std::cin >> a >> b;

    double* p = &a;
    double* v = &b;

    (*p) *= 2;

    double t = *p;


    a = *v;
    b = t;

    cout << a << " " << b;
    std::cout << "\n";
}

void program2() 
{
    /*Описать 2 указателя на целый тип.Выделить для них динамическую
    память.Ввести значения в выделенную память с клавиатуры.Уменьшить в 2 раза 1 - ую
    переменную.*/

    std::cout << "Программа 2 запущена.\n";

    int* t = new int;
    int* p = new int;

    cin >> *t >> *p;

    *t /= 2;

    cout << *t << " " << *p;
    std::cout << "\n";
}

void program3() 
{
    /*Создать динамические массивы, используя указатели.Задан одномерный
    массив а(n).Найти количество, все номера и произведение элементов массива меньших
    3.*/
    std::cout << "Программа 3 запущена.\n";\

    int n;
    int* a;
    int* b;
    cout << endl << " Ввод кол-ва элементов массива " << endl;
    cin >> n;

    a = new int[n];
    b = new int[n];
    int k = 0;
    int m = 1;

    cout << endl << " Ввод данных в массив " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "\t -  a[" << (i + 1) << "]: ";
        cin >> a[i];
    }


    for (int i = 0; i < n; i++)
    {
        if (a[i] < 3)
        {
            b[i] = a[i];
            m = m * b[i];
            k++;
            cout << "Номер  " << i + 1 << "\n";

        }
    }
    cout << "\n";
    cout << "Кол-во \t";
    cout << k;//кол-во
    cout << "\n";
    cout << "Произведение \t";
    cout << m;//произведение
    cout << "\n";
}

void program4() 
{
    /*Создать динамические массивы, используя указатели.Дан массив b(n) .
    Переписать в массив C(n) положительные элементы массива b(n) умноженные на 5 (со
    сжатием., без пустых элементов внутри) Затем упорядочить методом «выбора и
    перестановки» по возрастанию новый массив.*/

    std::cout << "Программа 4 запущена.\n";

    srand((int)time(0));
    int n;
    int k = 0;
    int m = 0;

    cout << "Размер массива b: "; cin >> n;

    double* b = new double[n];

    for (int i = 0; i < n; i++)
    {
        b[i] = rand() % 101 - 50;

        if (b[i] > 0)
        {
            k++;
        }
        cout << "\t - b[" << (i + 1) << "]: " << b[i] << "\n";
    }

    double* c = new double[k];

    for (int i = 0; i < n; i++)
    {
        if (b[i] > 0)
        {
            c[m++] = 5 * b[i];
        }
    }

    cout << "\n Не упорядоченный массив \n";

    for (int i = 0; i < m; i++)
    {
        cout << "\t - c[" << (i + 1) << "]: " << c[i] << "\n";
    }

    for (int i = 0; i < k; ++i)
    {
        double tmp = c[i];

        for (int j = i + 1; j < k; ++j)
        {
            if (c[i] > c[j])
            {
                if (i != j)
                {
                    tmp = c[i];
                    c[i] = c[j];
                    c[j] = tmp;
                }
            }
        }
    }

    cout << "\nУпорядоченный массив\n";

    for (int i = 0; i < m; i++)
    {
        cout << "\t - c[" << (i + 1) << "]: " << c[i] << "\n";
    }
    cout << endl;

    delete[]b;
    delete[]c;
    system("pause");
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


	
