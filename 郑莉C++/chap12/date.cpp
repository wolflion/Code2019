//date.cpp
#include "date.h"
#include <iostream>
#include <stdexcept>
using namespace std;

Date::Date(int year, int month,int day):year(year),month(month),day(day)
{
    if(day<=0||day>getMaxDay())
        throw runtime_error("Invalid date");
    int years = year-1;
    totalDays = years*365+years/4-years/100+years/400+DAYS_BEFORE_MONTH[month-1]+day;
    if(isLeapYear() && month >2)
        totalDays++;
}

istream & operator>>(istream &in, Date &date)
{
    int year, month, day;
    char c1, c2;
    in >> year >> c1>>month>>c2>>day;
    if(c1!='-'||c2!='-')
        throw runtime_error("Bad time format");
    date = Date(year,month,day);
    return in;
}
