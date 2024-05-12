#include <iostream>
#include <iomanip>
#include <string.h>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <math.h>
#include <vector>

using namespace std;

double f(float x, int k, float m)
{
    if (k == 1)
    {
        return x;

    }
    x = x + (x / (m * m));
    return f(x, k - 1, m + 1);
}

