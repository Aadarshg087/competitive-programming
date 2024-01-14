#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve()
{
    // int temp = 32;
    // cout << bitset<8>(temp) << endl;
    // cout << (temp ^ (1 << 0)) << endl;

    // cout << ((temp & (temp - 1)) ? "NO" : "YES") << endl;

    // int temp2 = temp & (~(1 << 2));
    // cout << temp2 << "\n"
    //      << bitset<8>(temp2) << endl;
    int a = 10, b = 20;
    cout << a << " " << b << endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << a << " " << b << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // solve();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}