#include <QCoreApplication>
#include "unit.h"
#include "pudge.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Unit *u1 = new Unit();
    Unit *u2 = new Pudge();
    //WindRanger u3;

    for(int i = 0; i < 100; i++) {

        if (u1->health <= 0) {
        cout << u2->name << " WIN" << endl;
        break;
        }
        u1->attack(*u2);

        if (u2->health <= 0) {
            cout << u1->name << " WIN" << endl;
            break;
            }
        u2->spell_1(*u1);


    }

    return a.exec();
}
