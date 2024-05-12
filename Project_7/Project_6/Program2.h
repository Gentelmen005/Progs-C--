#include <iostream>
#include <iomanip>
#include <string>		
#include <algorithm>	
#include <Windows.h>
#include <sstream>
#include <math.h>

const double Rad = 3.14 / 180;

using namespace std;

double Get_square(double a, double b)
{
    return(((a * b) * cos(a * Rad)));

}
