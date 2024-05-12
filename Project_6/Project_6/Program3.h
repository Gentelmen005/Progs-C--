#include <iostream>
#include <iomanip>
#include <string>		
#include <algorithm>	
#include <Windows.h>
#include <sstream>

using namespace std;

typedef struct Address
{
	string street;
	string home;
	string flat;

}Address;

typedef struct FIO
{
	string last_name;
	string first_name;
	string patronymic;
}FIO;


typedef struct Anketa
{
	FIO fio;
	string city;
	Address address;

}Ank;



void Print(Ank* ankets, int count)
{
	cout << " №          Ф.И.О      Город                Адрес" << endl;
	for (int i = 0; i < count; i++)
	{
		cout << setw(2) << (i + 1);
		cout << setw(12) << ankets[i].fio.last_name << " " << ankets[i].fio.first_name << " " << ankets[i].fio.patronymic;
		cout << setw(11) << ankets[i].city;
		cout << setw(14) << ankets[i].address.street << " " << ankets[i].address.home << " " << ankets[i].address.flat;
		cout << endl;
	}

}
