#include <iostream>
#include <iomanip>
#include <string>		
#include <algorithm>	
#include <Windows.h>
#include <sstream>
#include <math.h>

using namespace std;

double Get_max(double a, double b)
{
    double max = a;

    if (max < b)
    {
        max = b;
    }
    return max;
}

float Get_form(float a, float b, float c)
{
    return (((Get_max(a, a + b) + Get_max(a, b + c)) / (1 + Get_max(a + b * c, b * 15))));
}
