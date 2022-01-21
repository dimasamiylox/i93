#include "unit.h"

Unit::Unit()
{
    this->health = 100;
    this->armor = 10;
    this->damage = 45;
    strcpy(this->name, "Unit1");
}

void Unit::attack(Unit &enemy) {
    int uron = this->damage * (enemy.armor / 100.0 );
    enemy.health -= uron;
    cout << this->name << " atakuet " << enemy.name
         << " i nanosit " << uron << " urona"
         << endl;
    cout << this->name << ":" << this->health << endl;
    cout << enemy.name << ":" << enemy.health << endl;
    cout << endl;
}

void Unit::spell_1(Unit &enemy) {
    cout << "No spell" << endl;
}
