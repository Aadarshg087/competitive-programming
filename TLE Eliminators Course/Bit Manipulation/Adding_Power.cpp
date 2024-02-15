#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll x = *max_element(v.begin(), v.end());
    ll maxpowerk = 1;
    while (maxpowerk < x)
    {
        maxpowerk *= k;
    }
    bool ans = true;
    while (maxpowerk > 0)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {

            if (v[i] >= maxpowerk)
            {
                v[i] -= maxpowerk;
                count++;
            }
        }
        if (count > 1)
        {
            ans = false;
            break;
        }
        maxpowerk /= k;
    }
    if (ans)
    {
        ll y = *max_element(v.begin(), v.end());
        if (y == 0)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;
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