#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    - Check for overflow
    - Add brackets while using bitwise
    - Check corner cases (out of bounds for loops)
    - Revise the code
    - Try to prove yourself wrong
*/

double binaryExpo(double x, ll n)
{

    // Base condition
    if (n == 1)
        return x;

    // Relation
    double ans = 0;
    if (n & 1)
    {
        ans = binaryExpo(x, n / 2);
        ans = ans * ans * x;
    }
    else
    {
        ans = binaryExpo(x, n / 2);
        ans = ans * ans;
    }

    return ans;
}

double myPow(double x, int n)
{
    double ans = 0;
    if (n < 0)
    {
        x = 1 / x;
        ans = binaryExpo(x, abs(n));
    }
    else
        ans = binaryExpo(x, n);

    ans *= 1.00000;
    return ans;
}

int main()
{
    double x = 2.00000;
    int n = -2;
    cout << myPow(x, n) << endl;

    return 0;
}