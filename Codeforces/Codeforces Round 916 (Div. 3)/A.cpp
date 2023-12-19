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
    string s;
    cin >> s;
    vector<char> v(27);
    char c = 'A';
    unordered_map<char, int> mp;
    for (int i = 1; i <= 26; i++)
    {
        v[i] = c;
        mp.insert({c, i});
        c++;
    }

    // for (auto i : mp)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }

    int mainAns = 0;
    for (int i = 0; i < n; i++)
    {
        // cout << s[i] << endl;
        if (mp.find(s[i]) != mp.end())
        {
            auto it = mp.find(s[i]);
            it->second--;
            // cout << it->second << endl;
        }
    }

    // for (auto i : mp)
    //     cout << i.first << " " << i.second << endl;

    for (int i = 0; i < n; i++)
    {
        auto it = mp.find(s[i]);
        if (it->second <= 0 && it->second != INT_MIN)
        {
            it->second = INT_MIN;
            mainAns++;
        }
    }
    cout << mainAns << endl;
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