#ifndef TIME_H
#define TIME_H


class Time
{
public:
    Time();
    Time(int h, int m);

    void print();
    Time operator +(int t);
    int operator -(Time t);
private:
    int hours;
    int minutes;
    int maxh = 24;    // max в часах
    int maxm = 60;      // max в минутах
};

#endif // TIME_H
