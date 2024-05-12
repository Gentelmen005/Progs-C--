#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <math.h>

using namespace std;

int Findmin(int a[], int n)
{
	int min = a[0];

	for (int i = 1; i < n; i++)
	{
		if (min > a[i])
		{

			min = a[i];

		}
	}

	return min;
}

int Findmax(int a[], int n)
{
	int max = a[0];

	for (int i = 1; i < n; i++)
	{
		if (max < a[i])
		{

			max = a[i];

		}
	}

	return max;
}
