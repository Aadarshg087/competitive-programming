#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve()
{
    ll n;
    cin >> n;
    // ll maxGCD = 1;
    // for (int i = n; i >= 2; i--)
    // {
    //     for (int j = n; j >= 2; j--)
    //     {
    //         if (i == j)
    //             continue;
    //         ll ans = __gcd(i, j);
    //         maxGCD = max(maxGCD, ans);
    //     }
    // }

    // cout << maxGCD << endl;

    if ((n & 1) == 0)
        cout << n / 2 << endl;
    else
        cout << (n - 1) / 2 << endl;
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