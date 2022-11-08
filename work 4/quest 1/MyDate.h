#pragma once
using namespace std;
#include <iostream>
class MyDate
{
private:
	int day, month, year;
public:
	MyDate();
	MyDate(int d, int m, int y);
	int get_day();
	int get_month();
	int get_year();
	void set_date(int d, int m, int y);
	~MyDate();
	bool operator>(const MyDate& d)const;
	friend ostream& operator<<(ostream& os, const MyDate& a)
	{
		os <<  a.day << "/" << a.month << "/" << a.year <<  endl;
		return os;
	}
};

