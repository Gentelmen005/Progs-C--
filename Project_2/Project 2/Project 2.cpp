#include <iostream>
#include <windows.h>
#include <ctime>
#include <stdio.h>
#include <iomanip>
#include <sstream>

using namespace std;


void program1() 
{
	/*Создать динамические массивы, используя указатели.Дан двумерный
    массив a, размером(nm).Заполнить одномерный массив, найдя сумму положительных
	элементов в каждом столбце матрицы.*/

    std::cout << "Программа 1 запущена.\n";

	int n, m;
	cout << "Ввод размера матрицы n на m: ";
	cin >> n >> m;

	int* b = new int[m];
	int** a = new int* [n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[m];
	}

	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			a[i][j] = -25 + rand() % 51; // случайное число из отрезка [-25; +25]

		}
	}

	cout << " Матрица a:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		for (int j = 0; j < m; j++)
		{
			cout << setw(7) << a[i][j] << " ";
		}
	}


	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = 0; j < m; j++)
		{
			if (a[j][i] > 0)
			{
				sum += a[j][i];
			}
		}

		b[i] = sum;
	}

	cout << "\nВывод одномерного массива b: ";
	for (int i = 0; i < m; i++)
	{

		cout << " " << b[i];
	}
	cout << endl;

}

void program2() 
{
    /*Создать динамические массивы, используя указатели.Дан двумерный
      массив a, размером(nn) (или квадратная матрица а).Найти количество элементов,
      равных заданному числу х и расположенных в верхней треугольной матрице,
      расположенной выше побочной диагонали, исключая саму побочную диагональ.*/

    std::cout << "Программа 2 запущена.\n";
    
    
    int n;//размер массива n&n
    int x;//заданое число
    int col = 0;

    cout << "n = ";
    cin >> n;
    cout << "x = ";
    cin >> x;
    int** a = new int* [n];

    for (int i = 0; i < n; i++)
    {
        a[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand() % 10 + 1;
            cout << a[i][j] << "\t";

            if (i + j < n - 1)
            {
                if (a[i][j] == x)
                {
                    col++;
                }
            }
        }
        cout << endl;
    }
    cout << endl << "Количество элементов,равных заданному числу x: = " << col << endl;
    delete[] a;

}

void program3() 
{
	/*Создать динамические массивы, используя указатели.
	Дан двумерный массив a, размером(nn).
	Упорядочить по возрастанию первую строку матрицы.*/

    std::cout << "Программа 3 запущена.\n";
	
	int n;
	cout << "n = ";
	cin >> n;
	int** a = new int* [n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[n];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % 10 + 1;
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (a[0][j] > a[0][j + 1])
			{
				int tmp = a[0][j];
				a[0][j] = a[0][j + 1];
				a[0][j + 1] = tmp;
			}
		}
	}

	std::cout << "Упорядочная матрица:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	delete[] a;
}

void program4() 
{
	/*Создать динамические массивы, используя указатели.
	Дан двумерный массив a, размером(nn).
	Упорядочить по возрастанию главную диагональ.*/
    std::cout << "Программа 4 запущена.\n";
	
	int n;
	cout << "n = ";
	cin >> n;
	int** a = new int* [n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[n];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % 10 + 1;
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}

	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i][i] > a[j][j])
			{
				temp = a[i][i];
				a[i][i] = a[j][j];
				a[j][j] = temp;
			}
		}
	}

	cout << "\n";
	std::cout << "Упорядочная матрица:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	delete[] a;

}

int main() {
    int choice;
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

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