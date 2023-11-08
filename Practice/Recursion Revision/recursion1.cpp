#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int number(int n)
{
    if (n == 1)
        return 1;
    cout << n << " ";
    return number(n - 1);
}

void aescNumber(int n)
{
    if (n == -1)
        return;
    aescNumber(n - 1);

    cout << n << " ";
}

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int power(int n)
{
    if (n == 1)
        return 2;

    return 2 * power(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << number(n) << "Yes" << endl;
    aescNumber(n);
    cout << endl;
    cout << factorial(n) << "Yes" << endl;
    cout << power(n) << "Yes" << endl;
    return 0;
}