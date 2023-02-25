#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Following is the main function we are using internally.
// Refer this for completing the ComplexNumbers class.

class ComplexNumbers
{
private:
    int real;
    int imaginary;

public:
    ComplexNumbers(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    void plus(ComplexNumbers c2)
    {
        this->real = this->real + c2.real;
        this->imaginary = this->imaginary + c2.imaginary;
    }

    void multiply(ComplexNumbers c2)
    {
        int real_term1 = real * c2.real;
        int real_term2 = -(c2.imaginary * imaginary);

        int imaginary_term1 = imaginary * c2.real;
        int imaginary_term2 = c2.imaginary * real;

        real = (real_term1 + real_term2);
        imaginary = (imaginary_term1 + imaginary_term2);
    }

    void print()
    {
        cout << real << " + i" << imaginary << endl;
    }
};
int main()
{
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1)
    {
        c1.plus(c2);
        c1.print();
    }
    else if (choice == 2)
    {
        c1.multiply(c2);
        c1.print();
    }
    else
    {
        return 0;
    }
}
