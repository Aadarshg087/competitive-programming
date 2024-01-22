#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

bool mycomp(const pair<int, int> p1, const pair<int, int> p2)
{
    return p1.second < p2.second;
}

void solve()
{
    // pair<int, int> p1 = {2, 3};
    // pair<int, int> p2 = {4, 1};
    // pair<int, int> ans = ((p1.second > p2.second) ? p1 : p2);
    // cout << ans.first << " " << ans.second << endl;

    vector<pair<int, int>> v = {{1, 2}, {4, 3}, {6, 1}};

    sort(v.begin(), v.end(), mycomp);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    // return 0;
}