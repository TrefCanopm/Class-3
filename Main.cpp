#include <iostream>
#include "Money.h"

using namespace std;

int main()
{
	Money a;
	Money c;

	cout << "" << endl;
	long r = 0;
	int k = 0;
	cin >> r >> k;
	Money b(r, k);
	cout << b << endl;
	c = b;
	if (a != c)
	{
		cout << a;
		cout << c;
		cout << "����� � �� ����� ����� �" << endl;
	}
	a = b;
	if (a == c)
	{
		cout << a;
		cout << b;
		cout << "����� � ����� ������ �" << endl;
	}
	cout << a.GetMoneyK() << endl;
	a--;
	cout << a.GetMoneyK() << endl;
}