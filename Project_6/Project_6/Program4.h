#include <iostream>
#include <iomanip>
#include <string>		
#include <algorithm>	
#include <Windows.h>
#include <sstream>

using namespace std;



typedef struct Gost_nomer
{
    string name_gost;
    int nomer;
    string comfort;
    int num;
    int cost;
}Gost;


void Print(Gost* gosts, int count)
{
    cout << " �       ��������      �����       ������������        ���-�� �������          ���������" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << setw(2) << (i + 1);
        cout << setw(15) << gosts[i].name_gost;
        cout << setw(11) << gosts[i].nomer;
        cout << setw(19) << gosts[i].comfort;
        cout << setw(22) << gosts[i].num;
        cout << setw(19) << gosts[i].cost;
        cout << endl;
    }

}

int Get_coount_city(Gost* gosts, int count)
{
    const string end_search = "City";
    int col = 0;

    for (int i = 0; i < count; i++)
    {
        if (gosts[i].name_gost.length() >= end_search.length() &&
            gosts[i].name_gost.substr(0, end_search.length()) == end_search)
        {
            col++;
        }
    }
    return col;
}

void Add_sort(Gost* gosts, Gost* gosts2, int count, int count_city)
{
    int t = 0;
    const string end_search = "City";
    for (int i = 0; i < count; i++)
    {
        if (gosts[i].name_gost.length() >= end_search.length() &&
            gosts[i].name_gost.substr(0, end_search.length()) == end_search)
        {
            gosts2[t] = gosts[i];
            t++;
        }

    }

    Gost k;

    for (int i = 0; i < count_city; i++)
    {
        for (int j = (i + 1); j < count_city; j++)
        {
            if (gosts2[j].nomer < gosts2[i].nomer)
            {
                k = gosts2[i];
                gosts2[i] = gosts2[j];
                gosts2[j] = k;
            }
        }
    }
}
