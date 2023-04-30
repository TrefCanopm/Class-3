#include <iostream>
#include "Money.h"


using namespace std;

int main()
{
	Money a;
	Money c;

	cout << "Enter the amount for class B" << endl;
	long r = 0;
	int k = 0;
	cout << "rubles: " << endl;
	cin >> r;
	cout << "kopecks" << endl;
	cin >> k;
	Money b(r, k);
	cout << b << endl;
	c = b;
	if (a != c)
	{
		cout << a << endl;
		cout << c << endl;
		cout << "Class A is not equal to Class C" << endl;
	}
	a = b;
	if (a == c)
	{
		cout << a << endl;
		cout << c << endl;
		cout << "Class A is equal to Class C" << endl;
	}
	cout << a.GetMoneyK() << endl;
	a--;
	cout << a.GetMoneyK() << endl;
	return 0;
}