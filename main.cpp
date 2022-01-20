#include <QCoreApplication>
#include "unit.h"
#include "pudge.h"
#include "windranger.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Unit u1;
    Pudge u2;
    WindRanger u3;

    u1.attack(u2);
    u2.MeatHoock(u3);
    u3.PowerShot(u1);
    return a.exec();
}
