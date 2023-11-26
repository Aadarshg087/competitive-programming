#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

void solve()
{
    int ones, twos, threes;
    cin >> ones >> twos >> threes;
    if (((twos + threes) & 1) == 0)
        cout << 1 << " ";
    else
        cout << 0 << " ";

    if (((ones + threes) & 1) == 0)
        cout << 1 << " ";
    else
        cout << 0 << " ";

    if (((ones + twos) & 1) == 0)
        cout << 1 << " ";
    else
        cout << 0 << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // solve();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}