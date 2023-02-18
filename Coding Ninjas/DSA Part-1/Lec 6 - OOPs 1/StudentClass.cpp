#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    // These are only accessed only inside the class
    string name;
    int rollno;
    int age;

public:
    // Constructor setting up the default value
    Student()
    {
        name = "Empty";
        rollno = 0;
        age = 0;
    }

    // Function to set up the inputs
    void setDetails(string name, int rollno, int age)
    {
        this->name = name;
        this->rollno = rollno;
        this->age = age;
    }

    // Function to print the details
    void getDetails()
    {
        cout << name << " " << rollno << " " << age << endl;
    }
};

int main()
{
    // Creating a object dyanmically
    Student *s1 = new Student;
    s1->setDetails("Aadarsh", 62, 21);
    s1->getDetails();

    // Creating a object statically
    Student s2;
    s2.setDetails("Varun", 45, 20);
    s2.getDetails();
    return 0;
}