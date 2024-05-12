#include <iostream>
#include <iomanip>
#include <string.h>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <math.h>
#include <vector>

using namespace std;

double f(double x, int a, int i)
{
    if (i - 1 == 0)
    {
        return x;
    }
    x = (x / 2) + (a / (2 * x));
    return f(x, a, --i);
}
