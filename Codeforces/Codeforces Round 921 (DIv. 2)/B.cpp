#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve()
{
    ll x, n;
    cin >> x >> n;
    if (x % n == 0)
    {
        cout << (x / n) << endl;
        return;
    }
    int temp = x / n;
    int mainAns = 0;
    // cout << "temp: " << temp << endl;
    for (int i = temp; i <= x / 2; i++)
    {
        // cout << i << endl;
        int temp2 = i * (n - 1);
        int rem = x - temp2;
        if (rem <= 0)
            continue;
        int ans = __gcd(i, rem);
        // cout << i << " " << temp2 << " " << rem << " " << ans << endl;
        mainAns = max(ans, mainAns);
    }
    cout << mainAns << endl;
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