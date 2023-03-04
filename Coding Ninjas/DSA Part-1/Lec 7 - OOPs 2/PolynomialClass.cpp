#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Polynomial
{
private:
    int *degCoeff;
    int capacity;

public:
    // Constructor
    Polynomial()
    {
        degCoeff = new int[7];
        capacity = 7;
    }

    // Copy Constructor
    Polynomial(Polynomial const &d)
    {
        this->degCoeff = new int[2 * capacity];
        for (int i = 0; i < capacity; i++)
        {
            this->degCoeff[i] = d.degCoeff[i];
        }
        this->capacity = d.capacity;
    }

    Polynomial operator=(Polynomial const &d)
    {
        }
};

int main()
{

    return 0;
}