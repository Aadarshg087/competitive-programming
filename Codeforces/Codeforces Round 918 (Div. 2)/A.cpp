#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve()
{
    int n = 3;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        mp[element]++;
    }

    for (auto i : mp)
    {
        if (i.second == 1)
        {
            cout << i.first << endl;
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