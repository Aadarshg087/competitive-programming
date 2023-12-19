#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve()
{
    string s;
    cin >> s;
    int count1 = 0;
    int count0 = 0;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            count1++;
        else
            count0++;
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1' && count0 > 0)
        {
            s[i] = '0';
            count0--;
        }
        else if (s[i] == '0' && count1 > 0)
        {
            s[i] = '1';
            count1--;
        }
        else
        {
            cout << n - i << endl;
            return;
        }
    }
    cout << 0 << endl;
    return;
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