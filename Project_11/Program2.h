#include <iostream>
#include <iomanip>
#include <string.h>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <math.h>
#include <vector>



using namespace std;

double y(int i, float s)
{
    double lg = log10(i + 0.5);
    if (i == 10)
        return s = s * lg;
    else
        s = s * lg;
    return y(i + 1, s);

}

