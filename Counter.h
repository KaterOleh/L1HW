#pragma once
#include <iostream>
using namespace std;
class Counter
{
public:
	int a = 0, k = 1, min = 0, max = 100;
	Counter();
	Counter(int min, int max, int a , int k ) ;
	~Counter() {
		cout << "Destructor: " << this << endl;
	}
	int GetMin(int min);
	int GetMax(int max);
	void SetMin(int min);
	void SetMax(int max);
	void SetPlus();
};
//int a = 0, k = 1;
//for (int i = min; i < max; i++)
//{
//	min++;
//	cout << min << endl;
//	if (min==max)
//	{
//		a++;
//	}
//}

