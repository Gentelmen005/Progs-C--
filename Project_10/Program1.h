#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <math.h>
#include <vector>

using namespace std;

void In_data(vector <int>& a, int n)
{
    const int MIN_VALUE = +8;
    const int MAX_VALUE = +15;

    for (int i = 0; i < n; i++)
    {
        a[i] = MIN_VALUE + rand() % (MAX_VALUE - MIN_VALUE + 1);
    }
}

void Print(vector <int> a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void Min(vector <int> a, int n, int& nom, int& min)
{
    min = a[0];
    nom = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (min >= a[i + 1])
        {
            min = a[i + 1];
            nom = i + 1;
        }
    }
}
