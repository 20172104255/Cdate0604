// Cdate0604.cpp : 定义控制台应用程序的入口点。
//


#include "stdafx.h"
#include<iostream>
using namespace std;
class Cdate
{
private:
	int year;
	int month;
	int day;
public:
	void init(int y, int m, int d);
	void display();
	void nextday();
};
void Cdate::init(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
void Cdate::nextday()
{
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
	{
		if (month == 2)
		{
			if (day == 29)
			{
				month = month + 1;
				day = day + 1 - 29;
			}
			else
			{
				day += 1;
			}
		}
	}
	else
	{
		if (month == 2)
		{
			if (day == 28)
			{
				month = month + 1;
				day = day + 1 - 28;
			}
			else
			{
				day += 1;
			}
		}
	}
	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (day == 30)
		{
			month = month + 1;
			day = day + 1 - 30;
		}
		else
		{
			day += 1;
		}
	}
	else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)
	{
		if (day == 31)
		{
			month = month + 1;
			day = day + 1 - 31;
		}
		else
		{
			day += 1;
		}
	}
	else if (month == 12)
	{
		if (day == 31)
		{
			day = day + 1 - 31;
			month = month + 1 - 12;
			year = year + 1;
		}
		else
		{
			day += 1;
		}
	}
}
void Cdate::display()
{
	cout << year << "年" << month << "月" << day << "日" << endl;
}
int main()
{
	Cdate oc;
	int a, b, c;
	cin >> a >> b >> c;
	oc.init(a, b, c);
	oc.nextday();
	oc.display();
	return 0;
}