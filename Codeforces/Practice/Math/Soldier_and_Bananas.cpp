#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

void solve()
{
    ll k, n, w;
    cin >> k >> n >> w;
    ll totalMoney = 0;
    for (int i = 1; i <= w; i++)
    {
        totalMoney += i * k;
    }

    if (n >= totalMoney)
        cout << 0 << endl;
    else
        cout << totalMoney - n << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    return 0;
}