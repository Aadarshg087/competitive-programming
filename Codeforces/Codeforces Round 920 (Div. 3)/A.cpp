#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve()
{
    vector<pair<int, int>> v;
    for (int i = 0; i < 4; i++)
    {
        int f, s;
        cin >> f >> s;
        v.push_back(make_pair(f, s));.cpp
    }
    sort(v.begin(), v.end());
    int num1 = abs(v[0].second - v[1].second);
    int num2 = abs(v[2].second - v[3].second);
    cout << num2 * num1 << endl;
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