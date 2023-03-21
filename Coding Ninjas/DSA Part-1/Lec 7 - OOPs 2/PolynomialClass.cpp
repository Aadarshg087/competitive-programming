#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*class Polynomial
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
*/

//  Driver program to test below functions

int main()
{
    int count1, count2, choice;
    cin >> count1;

    int *degree1 = new int[count1];
    int *coeff1 = new int[count1];

    for (int i = 0; i < count1; i++)
    {
        cin >> degree1[i];
    }

    for (int i = 0; i < count1; i++)
    {
        cin >> coeff1[i];
    }

    Polynomial first;
    for (int i = 0; i < count1; i++)
    {
        first.setCoefficient(degree1[i], coeff1[i]);
    }

    cin >> count2;

    int *degree2 = new int[count2];
    int *coeff2 = new int[count2];

    for (int i = 0; i < count2; i++)
    {
        cin >> degree2[i];
    }

    for (int i = 0; i < count2; i++)
    {
        cin >> coeff2[i];
    }

    Polynomial second;
    for (int i = 0; i < count2; i++)
    {
        second.setCoefficient(degree2[i], coeff2[i]);
    }

    cin >> choice;

    Polynomial result;
    switch (choice)
    {
        // Add
    case 1:
        result = first + second;
        result.print();
        break;
        // Subtract
    case 2:
        result = first - second;
        result.print();
        break;
        // Multiply
    case 3:
        result = first * second;
        result.print();
        break;

    case 4: // Copy constructor
    {
        Polynomial third(first);
        if (third.degCoeff == first.degCoeff)
        {
            cout << "false" << endl;
        }
        else
        {
            cout << "true" << endl;
        }
        break;
    }

    case 5: // Copy assignment operator
    {
        Polynomial fourth(first);
        if (fourth.degCoeff == first.degCoeff)
        {
            cout << "false" << endl;
        }
        else
        {
            cout << "true" << endl;
        }
        break;
    }
    }

    return 0;
}

class Polynomial
{
private:
    int *degCoeff; // Name of your array (Don't change this)
    int capacity;

public:
    Polynomial()
    {
        degCoeff = new int[7]{0};
        capacity = 7;
    }

    // Copy constructor
    Polynomial(Polynomial const &p)
    {
        this->degCoeff = new int[p.capacity];
        for (int i = 0; i < p.capacity; i++)
        {
            this->degCoeff[i] = p.degCoeff[i];
        }
        this->capacity = p.capacity;
    }

    // Copy assignment Operator
    void operator=(Polynomial const &p)
    {
        // Deep Copy
        this->degCoeff = new int[p.capacity];
        for (int i = 0; i < p.capacity; i++)
        {
            this->degCoeff[i] = p.degCoeff[i];
        }
        this->capacity = p.capacity;
    }

    Polynomial operator+(Polynomial const &p)
    {
        int max_num = max(this->capacity, p.capacity);
        for (int i = 0; i < max_num; i++)
        {
            this->degCoeff[i] = this->degCoeff[i] + p.degCoeff[i];
        }
        Polynomial pNew() return *this;
    }
    void operator-()
    {
    }
    void operator*()
    {
    }

    void setCoefficient(int deg, int coeff)
    {
        if (deg > capacity)
        {
            int *newDegCoeff = new int[deg + 1];
            for (int i = 0; i < capacity; i++)
            {
                newDegCoeff[i] = degCoeff[i];
            }
            delete degCoeff;
            degCoeff = newDegCoeff;
            capacity = deg + 1;
        }
        degCoeff[deg] = coeff;
    }
};
