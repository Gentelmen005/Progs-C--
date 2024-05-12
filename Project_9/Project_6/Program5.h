#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <cmath>

using namespace std;

void In_data(double** A, const size_t m)
{
    int n = m;
    for (int i = 0; i < m; i++)
    {
        A[i] = new double[m];
        for (int j = 0; j < n; j++)
        {
            A[i][j] = rand() % 9 + 1;
        }
    }
}

void Print(double** A, int m)
{
    int n = m;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(4) << A[i][j] << ' ';
        }
        cout << endl;
    }
}

int Sled_sum(double** A, int m)
{
    int sum = 0;
    int n = m;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum += A[i][j];
            }
        }
    }
    return sum;
}

void Matrix_square(double** A, double** Z, int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < m; k++)
            {
                Z[i][j] += A[i][k] * A[k][j];
            }
        }
    }
}