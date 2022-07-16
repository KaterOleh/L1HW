#include<iostream>
#include "Counter.h"
#include <sstream>
#include <string>
using namespace std;

Counter::Counter(){};

Counter::Counter(int min, int max, int a = 0, int k = 1)
{
	this->min = min;
	this->max = max;
}

int Counter::GetMin(int min)
{
	return min;
}

int Counter::GetMax(int max)
{
	return max;
}

void Counter::SetMin(int min)
{
	this->min = min;
}

void Counter::SetMax(int max)
{
	this->max = max;
}

void Counter::SetPlus()
{
	
	int answr = 0, e = 0;
	do
	{cout<<"\n"<<"Click:"<<"\n"<<
		"(1) - to increase by 1"<<"\n"<<
		"(2) - to display the value of the counter at the moment"<<"\n"<<
		"(3) - to end the program." << endl;
		
	cin >> answr;
	system("cls");
	switch (answr)
	{
	case 1:
		for (int i = 0; i < 1; i++)
		{
			
			e = ++min;
			if (e == max)
			{
				a++;
				e = 0;		//не обнуляет :(
			}
		}
		break;
		
	case 2:
		cout << a << ":" << e << endl;
		break;
	}
	} while (answr>0 && answr<3);	
}

int main() 
{
	int mi, ma;
	cout << "Enter range (from...to...)" << endl;
	cin >> mi;
	cin >> ma;
	Counter counter (mi,ma);
	counter.SetPlus();
	

	return 0;
}