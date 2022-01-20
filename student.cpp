#include "student.h"
#include <iostream>
#include <string.h>

Student::Student()
{
    strcpy(name, "Unnamed");
    age = 18;
    rating = 3.0;
}

Student::Student(char n[], int a, float r) {
    strcpy(name, n);
    age = a;
    rating = r;
}

void Student::print() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Rating: " << rating << std::endl;
}
