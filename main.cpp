#include <QCoreApplication>
#include "unit.h"
#include "pudge.h"
#include "windranger.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Unit u1;
    Pudge u2;
    //WindRanger u3;

    for(int i = 0; i < 100; i++) {

        if (u2.health <= 0) {
        cout << u1.name << " WIN" << endl;
        break;
        }
            u1.attack(u2);

            if (u1.health <= 0) {
            cout << u2.name << " WIN" << endl;
            break;
            }

            u2.MeatHoock(u1);

    // if (u1.health <= 0 && u2.health <= 0 || u1.health <= 0 && u3.health <= 0 || u2.health <= 0 && u3.health <= 0) {

    }

    return a.exec();
}
