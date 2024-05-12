#include <iostream>
#include <iomanip>
#include <string>		
#include <algorithm>	
#include <Windows.h>
#include <sstream>

using namespace std;

typedef struct Mountain
{
    string name;
    int height;
}Mount;


void Print(Mount* mounts, int count)
{
    cout << " №       Название      Высота" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << setw(2) << (i + 1);
        cout << setw(15) << mounts[i].name;
        cout << setw(11) << mounts[i].height;
        cout << endl;
    }

}

double Get_averable_height(Mount* mounts, int count)
{
    double average = 0;

    for (int i = 0; i < count; i++)
    {
        average += mounts[i].height;
    }

    return (average / count);
}

void Sort(Mount* mounts, int count)
{
    Mount k;

    for (int i = 0; i < count; i++)
    {
        for (int j = (i + 1); j < count; j++)
        {
            if (mounts[j].height < mounts[i].height)
            {
                k = mounts[i];
                mounts[i] = mounts[j];
                mounts[j] = k;
            }
        }
    }
}
