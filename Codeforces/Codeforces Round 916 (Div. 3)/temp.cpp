#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    // int x = 1;

    // long long int ans = (x << 32) - 5;
    // cout << ans << endl;
    // long long int s = (x << 32) - 1;
    // cout << s << endl;
    // cout << bitset<32>(s);

    // cout << bitset<8>(4) << " " << bitset<8>(-4) << endl;
    int n = 8;
    int k = 3;
    // cout << (1 << k) << endl;
    // cout << bitset<8>(8) << endl;
    cout << bitset<8>(1 << k) << endl;
    cout << bitset<8>(n) << endl;
    if (((1 << k) & n) != 0)
    {
        cout << "yes" << endl;
    }
    else
        cout << "No" << endl;
    return 0;
}