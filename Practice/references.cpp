#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//  & is used to reference
//  x is is also pointing to a so they change the same variable
void increment(int &x, int y, int *z)
{
    x++;
    y++;
    (*z)++;
}

// string doesn't need n input size. It is used in C
// Multiplication of variable can reach upto constraints
// integer wll ignore the starting zeros of integer eg 00001.
// so take it as string if these zeros matters. Also it won't work as arrays

int main()
{
    int a = 5, b = 9, c = 16;
    cout << a << " " << b << " " << c << endl;
    increment(a, b, &c);
    cout << a << " " << b << " " << c << endl;

    return 0;
}