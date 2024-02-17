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
#define ll long long int
const int M = 1e9 + 7;
long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a * 1LL) % M;
        a = (a * a * 1LL) % M;
        b >>= 1;
    }
    return res;
}
int countGoodNumbers(long long n)
{
    ll count = 1;
    ll h = n / 2;
    if (n & 1)
    {
        count = binpow(4, h) % M;
        count = (count * 1LL * (binpow(5, h + 1) % M)) % M;
    }
    else
    {
        count = binpow(4, h) % M;
        count = (count * (binpow(5, h) % M) * 1LL) % M;
    }
    return count;
}

int main()
{

    return 0;
}