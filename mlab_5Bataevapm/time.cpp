#include "time.h"
#include <qDebug>

Time::Time()
    :Time(0, 0)
{

}

Time::Time(int h, int m)
{
    if(m >= maxm){
        int td = m / maxm;
        h += td;
        m -= td * maxm;
    }
    this->hours = h < maxh ? h : h-maxh *(h/maxh);
    this->minutes = m;
}

void Time::print()
{
    qDebug("%d,%d", hours, minutes);
}

Time Time::operator +(int t)
{
    return Time(this->hours, t+this->minutes);
}

int Time::operator-(Time t)
{
   int n;
   if(this->hours-t.hours >0)
       n = this->hours-t.hours;
   else
       n =  maxh + this->hours-t.hours;
   return (n * maxm +(this->minutes-t.minutes));
}
