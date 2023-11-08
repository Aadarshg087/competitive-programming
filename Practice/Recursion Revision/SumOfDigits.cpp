#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n)
{
    if (n % 10 == n)
        return n;
    int rem = n % 10;
    return rem + sumOfDigits(n / 10);
}

int main()
{
    int n;
    cin >> n;
    cout << sumOfDigits(n) << endl;
    return 0;
}