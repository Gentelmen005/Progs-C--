#include <iostream>
#include <iomanip>
#include <string>		
#include <algorithm>	
#include <Windows.h>
#include <sstream>
#include <math.h>

using namespace std;

int Sign(double x)
{
    if (x < 0)
    {
        return -1;
    }
    else if (x = 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
