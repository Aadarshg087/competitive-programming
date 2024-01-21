#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;

int gcd(int a, int b)
{
    if (a % b == 0)
        return b;

    return gcd(b, a % b);
}

int BinaryExpo(int a, int b)
{
    if (b == 0)
        return 1;
    long long res = BinaryExpo(a, b / 2);
    if (b & 1)
        return (a * (res * res) % M) % M;
    else
        return (res * res) % M;
}

int main()
{
    int a = 20, b = 12;
    // cout << BinaryExpo(a, b) << endl;
    cout << gcd(a, b) << endl;
    cout << a % b << endl;

    return 0;
}