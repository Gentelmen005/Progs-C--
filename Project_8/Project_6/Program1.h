#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <math.h>


using namespace std;

int Get_min(const int v[], const size_t size)
{
	size_t count = 0;

	for (size_t i = 0; i < size; i++)
	{
		if (v[i] < 0)
		{
			count++;
		}
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
