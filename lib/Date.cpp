#include "Date.h"
#include <iostream>

using namespace std;

Date::Date()
{
    day = 1;
    month = 1;
    year = 2000;
}

Date::Date(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}

int Date::getDay() { return day; }
int Date::getMonth() { return month; }
int Date::getYear() { return year; }

void Date::setDate(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}