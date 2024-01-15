#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> arr1(n);
    vector<ll> arr2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    ll ans = 0;

    int la = 0;
    int ra = n - 1;
    int lb = 0;
    int rb = m - 1;
    while (la <= ra)
    {
        int diff1 = abs(arr1[la] - arr2[rb]);
        int diff2 = abs(arr1[ra] - arr2[lb]);
        if (diff1 >= diff2)
        {
            ans += diff1;
            la++;
            rb--;
        }
        else
        {
            ans += diff2;
            ra--;
            lb++;
        }
    }

    cout << ans << endl;

    // cout << ans << endl;
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