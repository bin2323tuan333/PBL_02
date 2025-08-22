#include "Date.h"

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

bool Date::isValid()
{
    if (day < 1 || month < 1 || month > 12 || year < 1)
        return false;

    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        daysInMonth[2] = 29;

    if (day > daysInMonth[month])
        return false;
    return true;
}

void Date::input()
{
    cout << "Enter date (dd mm yyyy): ";
    cin >> day >> month >> year;
    if (!isValid())
    {
        cout << "Invalid date! Resetting to default 01/01/2000.\n";
        day = 1;
        month = 1;
        year = 2000;
    }
}

void Date::display()
{
    cout << (day < 10 ? "0" : "") << day << "/"
         << (month < 10 ? "0" : "") << month << "/"
         << year;
}
