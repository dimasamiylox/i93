#include "windranger.h"

WindRanger::WindRanger()
{
    this->health = 100;
    this->armor = 20;
    this->damage = 10;
    strcpy(this->name, "WindRanger");
}

void WindRanger::PowerShot(Unit &enemy) {
    int shot = this->damage * 4;
    enemy.health -= shot;
    cout << this->name << " shotnula " << enemy.name
         << " i nanesla " << shot<< " urona"
         << endl;
}
