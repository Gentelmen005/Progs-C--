#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <math.h>

using namespace std;

size_t Get_count(const string input_string, const char search_char)
{
    size_t count = 0;

    for (size_t i = 0; i < input_string.size(); i++)
    {
        if (input_string[i] == search_char)
        {
            count++;
        }
    }

    return count;
}
