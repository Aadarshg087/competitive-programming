#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int spaceCount = 0;
    int ans = 0;
    int count = 0;
    int maxCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
        {
            count++;
            spaceCount++;
        }
        else
        {
            count = 0;
        }
        maxCount = max(count, maxCount);
    }
    // cout << spaceCount << endl;
    // cout << maxCount << endl;

    if (maxCount >= 3)
    {
        ans = 2;
        spaceCount -= maxCount;
    }
    else
    {
        ans = spaceCount;
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // solve();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}