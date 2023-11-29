#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

void solve()
{
    int x, n;
    cin >> x >> n;
    int need = n / 100;
    int rem = 0;

    if ((n % 100) > 0)
    {
        rem = 1;
    }

    if (need >= x)
        cout << (need - x) + rem << endl;
    else
        cout << 0 << endl;
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