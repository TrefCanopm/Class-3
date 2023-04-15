#pragma once

#include <iostream>

class Money
{
    long rubles;
	int kopecks;
public:
	Money();
	Money(long r, int k);
	Money(const Money&);
	long GetMoneyR();
	int GetMoneyK();
	void SetMoney(long r, int k);
	Money& operator = (const Money&);
	Money& operator --();
	Money& operator --(int);
	friend ostream& operator << (ostream& out, const Money&);
	friend istream& operator >> (istream& in, Money&);
	bool operator == (const Money&);
	bool operator != (const Money&);
	~Money();
};