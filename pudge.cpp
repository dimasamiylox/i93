#include "pudge.h"

Pudge::Pudge()
{
    this->health = 150;
    this->armor = 12;
    this->damage = 15;
    strcpy(this->name, "Pudge");

}
void Pudge::MeatHoock(Unit &enemy) {
    int huk = this->damage * 1.8;
    enemy.health -= huk;
    cout << this->name << " hukaet " << enemy.name
         << " i nanosit " << huk << " urona"
         << endl;
}
