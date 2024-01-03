#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void orr(vector<ll> v)
{
    ll ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        ans = ans | v[i];
        cout << ans << " ";
    }
    cout << endl;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    orr(v);
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for (auto i : v)
        cout << i << " ";
    cout << endl;
    orr(v);
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