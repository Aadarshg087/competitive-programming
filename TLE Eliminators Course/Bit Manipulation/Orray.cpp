#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

vector<ll> orr(vector<ll> v)
{
    ll ans = 0;
    vector<ll> b;
    for (int i = 0; i < v.size(); i++)
    {
        ans = ans | v[i];
        b.push_back(ans);
    }
    return b;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end(), greater<ll>());
    vector<ll> b = orr(v);
    for (int i : b)
        cout << i << " ";
    cout << endl;

    int temp = 1;
    vector<bool> nums();
    for (int i = 0; i <= 31; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[j] & temp)
        }
        temp <<= 1;
    }

    // reverse(v.begin(), v.end());
    // for (auto i : v)
    //     cout << i << " ";
    // cout << endl;
    // orr(v);
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