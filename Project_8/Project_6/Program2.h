#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <math.h>

using namespace std;

int Get_sum(const int v[], const size_t size)
{
	double count;

	for (int i = 1; i < size; i = i + 2)
	{
		count = count + v[i];
	}

	return count;
}

void Print(const int v[], const size_t size, const string message)// Вывод массива
{
	cout << message;
	for (size_t i = 0; i < size; i++)
	{
		cout << setw(5) << v[i];
	}
	cout << endl;
}


void Rand(int v[], const size_t size)// Заполнение массива
{
	const int MIN_VALUE = -50;
	const int MAX_VALUE = +50;

	for (size_t i = 0; i < size; i++)
	{
		v[i] = MIN_VALUE + rand() % (MAX_VALUE - MIN_VALUE + 1);
	}
}
