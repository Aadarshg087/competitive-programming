#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"
#define mod (ll)(1e9 + 7)

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ans = 1;
    while (k--)
    {
        ans *= n;
        ans %= mod;
    }
    cout << ans << endl;
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