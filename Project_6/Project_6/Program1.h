#include <iostream>
#include <iomanip>
#include <string>		
#include <algorithm>	
#include <Windows.h>
#include <sstream>


using namespace std;

typedef struct Anketa_Child
{
	string name;
	char sex;
	int height;

} AnkC;


void Print(AnkC* children, int count)
{
	cout << "¹\tÈìÿ\tÏîë\tÐîñò, ìì" << endl;
	for (int i = 0; i < count; i++)
	{
		cout << (i + 1) << "\t";
		cout << children[i].name << "\t";
		cout << children[i].sex << "\t";
		cout << children[i].height << endl;
	}
}

double average(AnkC* children, int count)
{
	double aver = 0;

	for (int i = 0; i < count; i++)
	{
		aver += children[i].height;
	}

	return(aver / count * 1.0);
}
