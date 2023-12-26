#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    if ((n & (n - 1)) == 0)
    {
        cout << (n - (n >> 1)) << endl;
        return;
    }

    int i = 1;
    int diff = INT_MIN;
    int ans;
    while (i < n)
    {
        ans = i;
        i = (i << 1);
    }
    cout << max(ans - (ans >> 1), (n + 1) - (i >> 1)) << endl;
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