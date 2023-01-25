#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n)
{
    if (n >= 0 && n <= 9)
    {
        return n;
    }
    int last_digit = n % 10;
    return last_digit + sumOfDigits(n / 10);
}

int main()
{
    int n;
    cin >> n;
    cout << sumOfDigits(n) << endl;
    return 0;
}