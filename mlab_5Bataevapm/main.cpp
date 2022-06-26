#include <QCoreApplication>
#include "time.h"
#include <QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Time f1(15, 20), f2(16, 50);
    Time c, b;
    c = f1+10;
    c.print();

    int amt = f2 -f1;
    qDebug("number of minutes %d", amt);

    b = f1 +amt;     // проверка
    b.print();

    return a.exec();
}
