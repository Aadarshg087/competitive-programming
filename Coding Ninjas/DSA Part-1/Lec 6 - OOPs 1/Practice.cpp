#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    char *name;
    int reg;
    int age;
    const int roll;

public:
    Student(char *name, int reg, int age, int roll) : roll(roll)
    {
        this->reg = reg;
        this->age = age;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        totalStudent++;
    }
    static int totalStudent;

    void getDetails() const
    {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Registration Number: " << this->reg << endl;
        cout << "Roll Number: " << this->roll << endl;
    }
};

int Student::totalStudent = 0;

int main()
{
    Student *s1 = new Student("Aadarsh", 12116817, 21, 62);
    s1->getDetails();
    cout << "Total Students: " << Student::totalStudent << endl;

    return 0;
}