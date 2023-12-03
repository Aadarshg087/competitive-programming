#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    char s[n];
    int zeros = 0;
    int ones = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        if (s[i] == '0')
        {
            zeros++;
        }
        else
        {
            ones++;
        }
    }

    if (zeros > ones)
    {
        cout << "YES" << endl;
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            cout << "YES" << endl;
            return;
        }
    }

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