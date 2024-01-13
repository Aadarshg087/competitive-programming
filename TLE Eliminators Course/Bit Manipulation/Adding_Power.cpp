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

    bool check = false;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            continue;
        }
        else if ((v[i] == 1 && check == false))
        {
            check = true;
            continue;
        }
        if (v[i] % k != 0)
        {
            cout << "NO" << endl;
            return;
        }
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