#pragma once
#ifndef _DATE_H_
#define _DATE_H_

#include<iostream>
using namespace std;

class Date
{
public:
    Date()
    {
        _year = 1990;
        _month = 1;
        _day = 1;

    }

    Date(int year, int month, int day)
        : _year(year)
        , _month(month)
        , _day(day)
    {
        if (!(year > 0 && month > 0 && month < 13 && day>0 && day <= GetDayOfMonth(year, month)))
        {
            _year = 1990;
            _month = 1;
            _day = 1;
        }
    }

    void setDateFromString(string date)
    {
        string day , month, year;
        bool bday = true, bmonth=false, byear=false;
        day = month = year = "";
        for (int i = 0; i < date.length(); i++)
        {
            if (bday)
            {
                if(date[i] != '.')
                    day += date[i];
                else
                {
                    bday=false; 
                    bmonth=true;
                    continue;
                }                
            }

            if (bmonth)
            {
                if(date[i] != '.')
                    month += date[i];
                else
                {
                    bmonth=false;
                    byear = true;
                    continue;
                }                
            }

            if (byear)
            {
                year += date[i];               
            }
        }

        this->_day = std::atoi(day.c_str());
        this->_month = std::atoi(month.c_str());
        this->_year = std::atoi(year.c_str());        
        
    }

    bool isleap(int year)  //Determine if it is a leap year
    {
        if ((0 == year % 4 && 0 != year % 100) || (year % 400 == 0))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int GetDayOfMonth(int year, int month)//The number of days in each month is different. Get the number of days in this month according to each month
    {
        int mon[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
        if (2 == month)
        {
            if (isleap(year))
            {
                return mon[2] += 1;
            }
        }
        return mon[month];
    }
    // What is the day after the current day? 
    Date operator+(int days)
    {
        Date tmp(*this);
        if (days < 0)  // Adding a negative number of days is equivalent to subtracting a positive number of days
        {
            days = -days;
            return tmp - days;
        }
        tmp._day += days;
        while (tmp._day > GetDayOfMonth(tmp._year,tmp._month))
        {
            tmp._day -= GetDayOfMonth(tmp._year, tmp._month);
            tmp._month++;
            if (tmp._month > 12)
            {
                tmp._year++;
                tmp._month = 1;
            }
        }
        return tmp;
    }

    // What is the day before the current date? 
    Date operator-(int days)
    {
        Date tmp(*this);
        if (days < 0)   //Subtracting a negative number of days is equivalent to adding a positive number of days
        {
            days = -days;
            return tmp + days;
        }

        tmp._day -= days;
        while (tmp._day < 0)
        {
            tmp._month--;
            if (tmp._month < 1)
            {
                tmp._year--;
                tmp._month = 12;
            }
            tmp._day += GetDayOfMonth(tmp._year, tmp._month);

        }
        return tmp;
    }

    // Find the difference between two dates 
    int operator-(const Date& d)
    {
        int count = 0;
        Date Mindate(*this);    //Hypothetical minimum
        Date Maxdate(d);        //Maximum hypothesis
        if (Mindate > Maxdate)  //If not, exchange two objects to satisfy
        {
            Maxdate = Mindate;
            Mindate = d;
        }
        while (Maxdate != Mindate)
        {
            Mindate++;
            count++;
        }
        return count;
    }

    // Prefix + + 
    Date& operator++()
    {
        *this = *this + 1;
        return *this;
    }

    // Post + + 
    Date operator++(int)
    {
        Date tmp(*this);
        *this = *this + 1;
        return tmp;
    }
    Date& operator--()
    {
        *this = *this - 1;
        return *this;
    }
    Date operator--(int)
    {
        Date tmp(*this);
        *this = *this - 1;
        return tmp;
    }


    // Judge whether two dates are equal 
    bool operator==(const Date& d)
    {
        if (_year == d._year &&
            _month == d._month &&
            _day == d._day)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // Judge whether two dates are different 
    bool operator!=(const Date& d)
    {
        if (*this == d)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    bool operator>(const Date& d)
    {
        if ((_year > d._year) ||
            (_year == d._year&&_month > d._month) ||
            (_year == d._year&&_month == d._month&&_day > d._day))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool operator>=(const Date& d)
    {
        if (*this > d || *this == d)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool operator<(const Date& d)
    {
        if (*this > d)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    bool operator<=(const Date& d)
    {
        if (*this >= d)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

private:
    int _year;
    int _month;
    int _day;

    friend std::ostream& operator<<(std::ostream& os, const Date& d);
};

std::ostream& operator<<(std::ostream& os, const Date& d) {
    os << d._day << '.' << d._month << '.' << d._year;
    return os;
}


#endif