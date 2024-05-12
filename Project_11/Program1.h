#include <iostream>
#include <iomanip>
#include <string.h>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <math.h>
#include <vector>

using namespace std;

void Rec(int n, double m)
{
    if (n - 1 == 0)
    {
        cout << m << endl;
        return;
    }
    Rec(--n, m / 10);
}