#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"
// 24 7
void solve()
{
    ll n, k;
    cin >> n >> k;

    if ((n % k) & 1)
    {
        ll temp = k * (n / k);
        temp -= k;
        ll diff = n - temp;
        if (diff & 1)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
    else
    {
        cout << "YES" << endl;
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