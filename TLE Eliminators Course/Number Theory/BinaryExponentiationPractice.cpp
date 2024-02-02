#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;

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

int BinaryExpoIter(int a, int b)
{
    int ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = (ans * 1LL * a) % M;
        }
        a = (a * 1LL * a) % M;
        b >>= 1;
    }
    return ans;
}

int main()
{
    int a = 20, b = 12;
    cout << BinaryExpo(a, b) << endl;
    cout << BinaryExpoIter(a, b) << endl;
    // cout << __gcd(a, b) << endl;
    // cout << a % b << endl;

    return 0;
}