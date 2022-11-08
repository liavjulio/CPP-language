#include "MyDate.h"

MyDate::MyDate()
{
	day = 1;
	month = 1;
	year = 2000;
}

MyDate::MyDate(int d, int m, int y)
{
	day = 1;
	month = 1;
	year = 2000;
	if ((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&(d>0&&d<=31)&&(year>0))
	{
		day = d;
		month = m;
		year = y;
	}
	else if ((m==2))
	{
		if ((((y%4==0)&&(y%100!=0))||(y%400==0))&& (d>0 && d <= 29) && (year>0))
		{
			day = d;
			month = m;
			year = y;
		}
		else if ((d > 0 && d <=28)&&(year>0))
		{
			{
				day = d;
				month = m;
				year = y;
			}
		}
	}
	else if ((m==4||m==6||m==9||m==11)&&(year>0)&&(d>0&&d<=30))
	{
		day = d;
		month = m;
		year = y;
	}
	if (day != d && month != m && year != y)
	{
		throw "invalid input";
	}
}

int MyDate::get_day()
{
	return day;
}

int MyDate::get_month()
{
	return month;
}

int MyDate::get_year()
{
	return year;
}

void MyDate::set_date(int d, int m, int y)
{
	
	if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && (d > 0 && d <= 31) && (year > 0))
	{
		day = d;
		month = m;
		year = y;
	}
	else if ((m == 2))
	{
		if ((((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)) && (d > 0 && d <= 29) && (year > 0))
		{
			day = d;
			month = m;
			year = y;
		}
		else if ((d > 0 && d <= 28) && (year > 0))
		{
			{
				day = d;
				month = m;
				year = y;
			}
		}
	}
	else if ((m == 4 || m == 6 || m == 9 || m == 11) && (year > 0) && (d > 0 && d <= 30))
	{
		day = d;
		month = m;
		year = y;
	}
	if (day != d && month != m && year != y)
	{
		throw "invalid input";
	}
}

MyDate::~MyDate()
{
}

bool MyDate::operator>(const MyDate& d) const
{
	if (year < d.year)
	{
		return true;
	}
	else if (year == d.year && month < d.month)
	{
		return true;
	}
	else if (year == d.year && month == d.month && day < d.day)
	{
		return true;
	}
	return false;
}

