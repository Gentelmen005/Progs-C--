#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <math.h>

const double Rad = 3.14 / 180;

void Paral(int& a, int& b, int& P, int& S)
{
    P = 2 * (a + b);
    S = a * b * cos(a * Rad);
}
