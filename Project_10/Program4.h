#include <iostream>
#include <iomanip>
#include <string.h>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <math.h>
#include <vector>
using namespace std;

void getMatrixColumnMin(int** m, const size_t size, const size_t row, size_t& minIndex, int& minValue)
{
    for (size_t col = 0; col < size; ++col)
    {
        if (m[row][col] <= minValue)
        {
            minValue = m[row][col];
            minIndex = col;
        }
    }
}

void printMatrix(int** m, const size_t n) {
    for (size_t row = 0; row < n; ++row)
    {
        for (size_t col = 0; col < n; ++col)
        {
            cout << m[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
