#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <math.h>

using namespace std;

struct Editions
{
    string Name;
    int Circulation;
    double Cost_year;
};

void In_data(Editions* edit, const size_t n, const size_t number_group)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << endl << "���� ������ � " << n << " �������� �� ������ �" << number_group << endl;

    for (size_t i = 0; i < n; i++)
    {
        cout << endl << "���� ���������� �� ������� �" << (i + 1) << endl;

        cout << "\t - ������� �������� �������: ";
        fflush(stdin);
        getline(cin, edit[i].Name);

        cout << "\t - ������� �����: ";
        cin >> edit[i].Circulation;

        cout << "\t - ������� ������� ���������: ";
        cin >> edit[i].Cost_year;
    }
}

void Print_data(const Editions* const edit, const size_t n, const string message)
{
    cout << message;
    cout << endl << "  �        ������������       �����       ������� ���������";

    for (size_t i = 0; i < n; i++)
    {
        cout << endl << setw(3) << (i + 1) <<
            setw(20) << edit[i].Name <<
            setw(12) << edit[i].Circulation <<
            setw(24) << edit[i].Cost_year;
    }
    cout << endl;
}

double Get_sum(const Editions* const edit, const size_t n)
{
    double sum = 0;

    for (size_t i = 0; i < n; i++)
    {
        sum = sum + edit[i].Circulation * edit[i].Cost_year;
    }

    return sum;
}
