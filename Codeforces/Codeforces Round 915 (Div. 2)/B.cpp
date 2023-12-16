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
    n = (n - 1) * 2;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    unordered_map<int, int> mp;
    for (int i = 0; i < v.size(); i += 2)
    {
        mp[v[i]]++;
    }
    int count = 0;
    // int s, e;
    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
        // if (e == 2)
        //     count++;
        // if (e == 3)
        //     count += 2;
        // else
        //     count++;
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