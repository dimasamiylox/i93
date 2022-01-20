#ifndef STUDENT_H
#define STUDENT_H


class Student {
private:
    char name[20];
    int age;
    float rating;
public:
    Student();
    Student(char n[], int a, float r);
    void print();
};

#endif // STUDENT_H
