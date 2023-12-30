#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll num = b * 2;
    while (true)
    {
        if (num % a == 0)
        {
            cout << num << endl;
            break;
        }
        num += b;
    }
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