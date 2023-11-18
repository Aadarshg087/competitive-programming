#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    if (n % 3 == 0)
        cout << "Second" << endl;
    else if (n % 3 == 1)
        cout << "First" << endl;
    else
        cout << "First" << endl;

    // cout << (1 % 3 == 0) << endl;
    // cout << (1 % 3 == 1) << endl;
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