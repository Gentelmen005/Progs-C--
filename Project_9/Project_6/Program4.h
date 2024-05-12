#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <math.h>

//const double Rad = 3.14 / 180;

void Cilindr(int x, int y, int z, int& p, int& f, int& z2)
{
    p = sqrt(x ^ 2 + y ^ 2);
    f = atan(y / x * Rad);
    z2 = z;
}