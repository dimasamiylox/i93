#include "pudge.h"

Pudge::Pudge()
{
    this->health = 150;
    this->armor = 12;
    this->damage = 15;
    strcpy(this->name, "Pudge");

}
void Pudge::MeatHoock(Unit &enemy) {
    int uron = this->damage * 1.8 * (enemy.armor / 100.0 );
    enemy.health -= uron;
    cout << this->name << " hukaet " << enemy.name
         << " i nanosit " << uron << " urona"
         << endl;
    cout << this->name << ":" << this->health << endl;
    cout << enemy.name << ":" << enemy.health << endl;
    cout << endl;
}
