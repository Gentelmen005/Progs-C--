#include <iostream>
#include <iomanip>
#include <string>		
#include <algorithm>	
#include <Windows.h>
#include <sstream>

using namespace std;

double Get_min(double a, double b)
{
    double min = a;

    if (min > b)
    {
        min = b;
    }
    return min;
}
