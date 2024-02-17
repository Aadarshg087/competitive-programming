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
const int M = 1337;
#define ll long long int
long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % M;
        a = (a * a) % M;
        b >>= 1;
    }
    return res;
}

int superPow(int a, vector<int> &b)
{
    if (a == 1)
        return a;
    string temp = "";
    for (int i : b)
    {
        temp += to_string(i);
        // temp += string(i, 1);
    }
    // cout << temp << endl;
    ll p = stoi(temp);
    ll ans = binpow(a, p);

    return ans;
}

int main()
{
    vector<int> v{4, 3, 3, 8, 5, 2};
    cout << superPow(1, v) << endl;

    return 0;
}