#ifndef UNIT_H
#define UNIT_H
#include <iostream>
#include <string.h>

using namespace std;

class Unit {
private:
    int health;
    int armor;
    int damage;
    char name[20];
public:
    Unit();
    void attack(Unit &enemy);
};

#endif // UNIT_H
