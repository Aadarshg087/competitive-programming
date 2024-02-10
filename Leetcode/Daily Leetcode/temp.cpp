#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int data;
    char c;
    char *p = &c;
    Student(int data, char c)
    {
        this->data = data;
        this->c = c;

        // cout << (&this->c) << endl;
        cout << (this->p) << endl;
    }
};

int main()
{
    Student s1(23, 't');
    // // cout << s1.c << endl;
    // char *p = &s1.c;
    // int *i = &s1.data;
    // cout << (&s1.data) << endl;
    // cout << i << endl;
    // cout << *i << endl;
    // cout << p << endl;
    // cout << *p << endl;
    // char c = 'p';
    // cout << &c << endl;
    // char *o = &c;
    // cout << o << endl;
    // cout << *o << endl;

    return 0;
}